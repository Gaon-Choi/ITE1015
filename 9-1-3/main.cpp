#include "print_member.h"

int main(void) {
	int a;
	double b;
	string c;

	cin >> a >> b >> c;
	vector<A*> objects = { new A(a), new B(b), new C(c) };
	vector<A*>::iterator iter = objects.begin();
	for (iter = objects.begin(); iter != objects.end(); iter++)
		(*iter)->print();
	iter = objects.begin();
	for (iter = objects.begin(); iter != objects.end(); iter++)
		delete (*iter);

	return 0;
}
