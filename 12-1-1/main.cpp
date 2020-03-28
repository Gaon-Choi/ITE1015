#include <iostream>


template<typename T>
void myswap(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

int main(void) {
	int a, b;
	double c, d;
	std::string e, f;
	std::cin >> a >> b;
	myswap(a, b);
	std::cout << "After calling myswap(): " << a << " " << b << std::endl;
	
	std::cin >> c >> d;
	myswap(c, d);
	std::cout << "After calling myswap(): " << c << " " << d << std::endl;
	
	std::cin >> e >> f;
	myswap(e, f);
	std::cout << "After calling myswap(): " << e << " " << f << std::endl;

	return 0;
}
