#include "print_info.h"

void printObjectTypeInfo1(A* object) {
	cout << object->getTypeInfo();
}

void printObjectTypeInfo2(A& object) {
	cout << object.getTypeInfo();
}

int main(void) {
	vector<A*> arr = { new A(), new B(), new C() };
	vector<A*>::iterator iter = arr.begin();
	for (iter = arr.begin(); iter != arr.end(); iter++) {
		printObjectTypeInfo1(*iter);
		printObjectTypeInfo2(**iter);
		delete *iter;
	}
	return 0;
}
