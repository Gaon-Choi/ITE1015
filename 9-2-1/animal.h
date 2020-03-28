#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Animal {
public:
	Animal(string name_, int age_);
	virtual void printInfo();
protected:
	std::string name;
	int age;
};

class Zebra :public Animal {
public:
	Zebra(string name_, int age_, int numStripes_);
	virtual void printInfo();
private:
	int numStripes;
};

class Cat :public Animal {
public:
	Cat(string name_, int age_, string favoriteToy_);
	virtual void printInfo();
private:
	string favoriteToy;
};

#endif
