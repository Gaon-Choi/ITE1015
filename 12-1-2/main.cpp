#include "my_container.h"

int main(void) {
	int num_1;
	std::cin >> num_1;
	MyContainer<int> vec_1(num_1);
	std::cin >> vec_1;
	std::cout << vec_1;

	int num_2;
	std::cin >> num_2;
	MyContainer<double> vec_2(num_2);
	std::cin >> vec_2;
	std::cout << vec_2;

	int num_3;
	std::cin >> num_3;
	MyContainer<std::string> vec_3(num_3);
	std::cin >> vec_3;
	std::cout << vec_3;
	return 0;
}
