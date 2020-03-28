#include "animal.h"

int main(void) {
	vector<Animal*> animals;
	char type;
	while (true) {
		cin >> type;
		if (type == '0')
			break;
		else if (type == 'z') {
			string name_;
			int age_, numStripes_;
			cin >> name_ >> age_ >> numStripes_;
			animals.emplace_back(new Zebra(name_, age_, numStripes_));
		}
		else if (type == 'c') {
			string name_, favoriteToy_;
			int age_;
			cin >> name_ >> age_ >> favoriteToy_;
			animals.emplace_back(new Cat(name_, age_, favoriteToy_));
		}
	}

	for (auto iter = animals.begin(); iter != animals.end(); ++iter) {
		(*iter)->printInfo();
		delete (*iter);
	}
	return 0;
}
