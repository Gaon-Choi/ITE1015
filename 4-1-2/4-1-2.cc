#include <iostream>

int main(void) {
	int N;
	std::cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		std::cin >> *(arr + i);
	}
	int max = *arr;
	int min = *arr;
	for (int i = 0; i < N; i++) {
		if (max < *(arr + i))
			max = *(arr + i);
		if (min > *(arr + i))
			min = *(arr + i);
	}
	std::cout << "min: " << min << std::endl;
	std::cout << "max: " << max << std::endl;
	delete[]arr;
	return 0;
}
