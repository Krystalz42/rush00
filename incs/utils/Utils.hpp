//
// Created by Alexandre ROULIN on 25/09/2018.
//

#ifndef __UTILS_HPP__
#define __UTILS_HPP__

#include <ncurses.h>


class Utils {
public:
	static Utils *getInstance();
	void exitAndReset();

private:
	static Utils *instance;
	WINDOW *windows;
	int old_cursor;
	bool is_keypad_;

	Utils();

	static void handler(int signum);
	void setTimer();

	void setSignals();

};

#endif //__UTILS_HPP__