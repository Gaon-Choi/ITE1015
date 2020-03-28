#include <iostream>
#include <string>

int main(void) {
	std::string str1;
	std::string str2;
	std::cin >> str1;
	std::cin >> str2;
	std::string str_sum = str1 + str2;
	std::cout << str_sum << "\n";
	std::cout << str_sum[0] << "\n";
	std::cout << str_sum[str_sum.length() - 1] << "\n";

	return 0;
}
