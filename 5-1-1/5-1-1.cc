#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
	for(int i=0; i < atoi(argv[2]); i++)
		std::cout << argv[1] << std::endl;
	return 0;
}
