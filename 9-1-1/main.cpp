#include "classes.h"

int main(void) {
	vector <A*> arr = { new A(), new B(), new C() };
	vector <A*>::iterator iter = arr.begin();
	for (iter = arr.begin(); iter != arr.end(); iter++) {
		(*iter)->test();
		delete* iter;
	}
	return 0;
}
