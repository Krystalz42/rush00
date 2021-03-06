

#include <utils/Utils.hpp>
#include <Space.hpp>
#include <ostream>
#include <fstream>

void listenUser() {

	Space s = Space();
	int ch;
	unsigned count = 0;

	while (0x2a) {
		if (COLS < 100 || LINES < 25) {
			endwin();
			std::cerr << "Windows too small" << std::endl;
			Utils::getInstance()->exitAndReset();
		}
		if ((ch = getch()) != ERR)
			if (s.getInput(ch))
				return;
		if ((count % 150) == 0)
			s.moveUserBullets();
		if ((count % 300) == 0)
			s.moveEnnemyBullets();
		if ((count % 100) == 0)
			s.refresh();
		if ((count % 800) == 0)
			s.ennemyAction();
		count++;
	}

}

int main() {
	Utils::getInstance();
	listenUser();
	Utils::getInstance()->exitAndReset();
}
