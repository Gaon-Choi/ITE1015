#include "print_member.h"

A::A(int a)
	:memberA(new int(a)) {
		cout << "new memberA\n";
	}

void A::print() const {
	cout << "*memberA " << *memberA << endl;
}

A::~A() {
	delete memberA;
	cout << "delete memberA\n";
}

B::B(double b)
	:A(1), memberB(new double(b)) {
		cout << "new memberB\n";
	}

void B::print() const {
	A::print();
	cout << "*memberB " << *memberB << endl;
};

B::~B() {
	delete memberB;
	cout << "delete memberB\n";
}

C::C(string c)
	: B(1.1), memberC(new string(c)) {
		cout << "new memberC\n";
	}

void C::print() const {
	B::print();
	cout << "*memberC " << *memberC << endl;
}

C::~C() {
	delete memberC;
	cout << "delete memberC\n";
}
