#include <iostream>
#include "message.h"

int main(void) {
	MessageBook mbook;
	std::string mode;
	while (true) {
		std::cin >> mode;
		if (mode == "quit")
			break;
		else if (mode == "add") {
			int num = 0;
			std::string msg;
			std::cin >> num;
			std::getline(std::cin, msg);
			if ((msg != "") && (msg[0] == ' '))
				msg.erase(msg.begin());
			mbook.AddMessage(num, msg);
		}
		else if (mode == "list") {
			for (int i : mbook.GetNumbers())
				std::cout << i << ": " << mbook.GetMessage(i) << std::endl;
		}
		else if (mode == "print") {
			int num;
			std::cin >> num;
			std::cout << mbook.GetMessage(num) << std::endl << std::endl;
		}
		else if (mode == "delete") {
			int num;
			std::cin >> num;
			mbook.DeleteMessage(num);
		}
	}
	return 0;
}
