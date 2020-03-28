#include <iostream>
#include <string>

typedef struct Person {
	int age;
	std::string name;
}Person;

int main(void) {
	int N;
	std::cin >> N;
	Person* people = new Person[N];
	for (int i = 0; i < N; i++) {
		int age;
		std::string name;
		std::cin >> name >> age;
		(people + i)->name = name;
		(people + i)->age = age;
	}
	for (int i = 0; i < N; i++) {
		std::cout << "Name: " << people[i].name << ", " << "Age: " << people[i].age << "\n";
	}
	delete[]people;
	return 0;
}
