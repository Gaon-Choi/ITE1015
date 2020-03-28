#include <iostream>
#include <string>

typedef struct Person {
	std::string name;
	double score;
}Person;

int main(int argc, char** argv) {
	int num=0;
	while(1) {
		if (argv[num] == NULL) {
			num = num / 2;
			break;
		}
		else num += 1;
	}
	Person* arr = new Person[num];
	for(int i = 0; i < num; i++) {
		arr[i].name = argv[2*i + 1];
		arr[i].score =atof(argv[2*(i+1)]);
	}
	for(int i = 0; i< num; i++) {
		std::cout<<"Name: "<<arr[i].name<<", "<<"Score: "<<arr[i].score<<std::endl;
	}
	delete[] arr;
	return 0;
}
