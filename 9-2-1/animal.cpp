#include "animal.h"

Animal::Animal(string name_, int age_)
	:name(name_), age(age_) {
	// Do Nothing.
}

void Animal::printInfo() {
	// Do Nothing.
}

Zebra::Zebra(string name_, int age_, int numStripes_)
	:Animal(name_, age_), numStripes(numStripes_) {
	// Do Nothing.
}

void Zebra::printInfo() {
	cout << "Zebra, " << "Name: " << name << ", " << "Age: " << age << ", " << "Number of stripes: " << numStripes << endl;
}

Cat::Cat(string name_, int age_, string favoriteToy_)
	:Animal(name_, age_), favoriteToy(favoriteToy_) {
	// Do Nothing.
}

void Cat::printInfo() {
	cout << "Cat, " << "Name: " << name << ", " << "Age: " << age << ", " << "Favorite toy: " << favoriteToy << endl;
}
