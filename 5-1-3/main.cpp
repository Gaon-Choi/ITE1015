#include <iostream>
#include "minmax.h"

int main(int argc, char** argv) {
	int N = 0;
	while(argv[N + 1] != NULL)
		N += 1;
	int min, max;
	int* arr = new int[N];
	for(int i=0; i<N; i++)
		arr[i] = atoi(argv[i+1]);
	getMinMax(arr, N, min, max);
	std::cout << "min: " << min << std::endl;
	std::cout << "max: " << max << std::endl;
	delete[] arr;
	
	return 0;
}
