//
// Created by Alexandre ROULIN on 25/09/2018.
//

#include <ctime>
#include <cstdlib>
#include <sys/time.h>
#include <iostream>
#include <ncurses.h>
#include <csignal>
#include <fstream>
#include <utils/Utils.hpp>


void Utils::setTimer() {
	struct itimerval it = {0};
	static int time = 1000;
	/*  Set timer  */

	it.it_interval.tv_usec = time;
	it.it_value.tv_usec = time;
	setitimer(ITIMER_REAL, &it, nullptr);
}

void Utils::setSignals() {
	struct sigaction sa = {};

	/*  Fill in sigaction struct  */

	sa.sa_handler = handler;
	sa.sa_flags = 0;
	sigemptyset(&sa.sa_mask);


	/*  Set signal handlers  */

	sigaction(SIGTERM, &sa, nullptr);
	sigaction(SIGINT, &sa, nullptr);
	sigaction(SIGALRM, &sa, nullptr);


	/*  Ignore SIGTSTP  */

	sa.sa_handler = SIG_IGN;
	sigaction(SIGTSTP, &sa, nullptr);
}

Utils::Utils() {

	setlocale(LC_ALL, "");
	srand((unsigned) time(nullptr));
	setTimer();
	setSignals();
	if ((windows = initscr()) == nullptr) {
		perror("error initialising ncurses");
		exit(EXIT_FAILURE);
	}

	cbreak();
	noecho();
	is_keypad_ = is_keypad(windows);
	keypad(windows, true);
	old_cursor = curs_set(0);
}

Utils *Utils::instance = nullptr;

Utils *Utils::getInstance() {
	if (instance == nullptr) {
		instance = new Utils();
	}
	return instance;
}

void Utils::exitAndReset() {
	echo();
	keypad(windows, is_keypad_);
	delwin(windows);
	curs_set(old_cursor);
	endwin();
	refresh();
	exit(EXIT_SUCCESS);
}


void Utils::handler(int signum) {

	switch (signum) {

		case SIGALRM:
			return;
		case SIGTERM:
		case SIGINT:
			instance->exitAndReset();
	}
}