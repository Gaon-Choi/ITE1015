#include <iostream>
using namespace std;
class A {
public:
	A(int n)
		:n_ID(n), data(nullptr) {
		if (n <= 0)
			throw n;
		cout << "ID=" << n << ": constructed\n";
		n_ID = n;
		data = new int[n];
	}
	~A() {
		cout << "ID=" << n_ID << ": destroyed\n";
		delete data;
	}
private:
	int* data = NULL;
	int n_ID;
};
int main() {
	try {
		A a(3);
		A b(2);
		{
			A c(1);
			A d(0);
			A e(-1);
		}
	}
	catch (int& n) {
		std::cout << "caught in the main" << std::endl;
	}

	return 0;
}
