

#include <utils/Utils.hpp>
#include <Space.hpp>
#include <ostream>
#include <fstream>

std::ofstream file("/tmp/log.out");

void listenUser() {

	Space s = Space();
	int ch;
	unsigned count = 0;

	while (0x2a) {
		if ((ch = getch()) != ERR)
			if (s.getInput(ch))
				return;
		if ((count % 150) == 0)
			s.moveUserBullets();
		if ((count % 300) == 0)
			s.moveEnnemyBullets();
		if ((count % 100) == 0)
			s.refresh();
		if ((count % 5000) == 0)
			s.ennemyAction();
		count++;
	}

}

int main() {
	file << "-----------" << std::endl;
	Utils::getInstance();
	listenUser();
	while (true);
	Utils::getInstance()->exitAndReset();
}
