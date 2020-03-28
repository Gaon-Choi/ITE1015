#include "number.h"

int main(void) {
	char text[10];
	int num;
	while (true) {
		cin >> text;
		if (strcmp(text, "quit") == 0)
			break;
		else
			cin >> num;
		if (strcmp(text, "number") == 0) {
			Number n_;
			n_.setNumber(num);
			cout << "getNumber(): " << n_.getNumber() << endl;
		}
		else if (strcmp(text, "square") == 0) {
			Square s_;
			s_.setNumber(num);
			cout << "getNumber(): " << s_.getNumber() << endl;
			cout << "getSquare(): " << s_.getSquare() << endl;
		}
		else {
			Cube c_;
			c_.setNumber(num);
			cout << "getNumber(): " << c_.getNumber() << endl;
			cout << "getSquare(): " << c_.getSquare() << endl;
			cout << "getCube(): " << c_.getCube() << endl;
		}
	}
	return 0;
}
