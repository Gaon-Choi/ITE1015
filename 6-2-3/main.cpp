#include <iostream>
#include "accounts.h"

int main(void) {
	AccountHandler manager;
	std::string choice;
	while(1) {
		std::cout << "Job?" << std::endl;
		std::cin >> choice;
		if (choice == "D") {
			int id, money;
			std::cin >> id >> money;
			manager.Deposit(id, money);
		}
		else if (choice == "W") {
			int id, money;
			std::cin >> id >> money;
			manager.Withdraw(id, money);
		}
		else if (choice == "T") {
			int id_from, id_to, money;
			std::cin >> id_from >> id_to >> money;
			manager.Transfer(id_from, id_to, money);
		}
		else if (choice == "N") {
			if(manager.num < 10){
			manager.acc[manager.num] = Account();
			std::cout << "Account for user " << manager.num << " " << "registered" << std::endl;
			manager.num += 1;
		}
			else
				std::cout<<"No more new accounts!\n";
		}
		else if (choice == "Q")
			break;
		manager.ShowAccount();
	}
}
