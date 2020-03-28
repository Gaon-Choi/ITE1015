#include <iostream>
#include "accounts.h"
Account::Account()
	:balance(0) {}

bool ID_check(int id, int num) {
	if (id >= num)
		return false;
	else
		return true;
}

AccountHandler::AccountHandler()
:num(0){
	acc = new Account[10];
}

void AccountHandler::Deposit(int id, int money) {
	if (!ID_check(id, num))
		std::cout << "Account does not exist" << std::endl;
	else {
		if (acc[id].balance + money > 1000000)
			std::cout << "limit!" << std::endl;
		else {
			acc[id].balance += money;
			std::cout << "Success: Deposit to user " << id << " " << money << std::endl;
		}
	}
}

void AccountHandler::Withdraw(int id, int money) {
	if(!ID_check(id, num))
		std::cout << "Account does not exist" << std::endl;
	else {
		if (acc[id].balance - money < 0)
			std::cout << "Failure: Withdraw from user " << id << " " << money << std::endl;
		else {
			acc[id].balance -= money;
			std::cout << "Success: Withdraw from user " << id << " " << money << std::endl;
		}
	}
}

void AccountHandler::Transfer(int id_from, int id_to, int money) {
	if (!ID_check(id_from, num) || !ID_check(id_to, num))
		std::cout << "Failure: Transfer from user " << id_from << " to " << id_to << " " << money << std::endl;
	else {
		if (acc[id_from].balance >= money) {
			acc[id_from].balance -= money;
			acc[id_to].balance +=money;
			std::cout << "Success: Transfer from user " << id_from << " to " << id_to << " " << money << std::endl;
		}
		else
			std::cout << "Failure: Transfer from user " << id_from << " to " << id_to << " " << money << std::endl;
	}
}

void AccountHandler::ShowAccount() {
	for (int i =0; i < num; i++)
		std::cout << "Balance of user " << i << ": " << acc[i].balance << std::endl;
	std::cout<<std::endl;
}

AccountHandler::~AccountHandler() {
	delete[] acc;
}
