#pragma once
class Account {
	public:
		int balance;
		Account();
};

class AccountHandler {
	public:
		Account* acc;
		int num;
		AccountHandler();
		void Deposit(int id, int money);
		void Withdraw(int id, int money);
		void Transfer(int id_from, int id_to, int money);
		void ShowAccount();
		~AccountHandler();
};
