#include "rect.h"

int main(void) {
	string text;
	int a, b;
	while (true) {
		cin >> text;
		if (text == "quit")
			break;
		if (text == "nonsquare") {
			cin >> a >> b;
			NonSquare ns(a, b);
			ns.print();
		}
		else if (text == "square") {
			cin >> a;
			Square sq(a);
			sq.print();
		}
	}
	return 0;
}
