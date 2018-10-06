

#include <utils/Utils.hpp>
#include <Space.hpp>

void listenUser() {
	Space		s = Space();
	int ch;
	unsigned count = 0;

	while (0x2a) {
		if ((ch = getch()) != ERR)
			s.getInput(ch);
		if ((count % 150) == 0)
			s.moveBullets();
		if ((count % 300) == 0) {
			s.moveEnnemyBullets();
			s.ennemyAction();
		}

		count++;
	}

}

int main() {

	Utils::getInstance();
	listenUser();
	Utils::getInstance()->exitAndReset();
}

