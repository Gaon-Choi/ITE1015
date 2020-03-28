#include <stdio.h>
#include <string.h>
typedef struct Person{
	int age;
	char name[10];
}Person;

int main(void){
	Person person[3];
	for(int i=0;i<3;i++){
		char str[10];
		int a=0;
		scanf("%s", str);
		scanf("%d", &a);
		strcpy(person[i].name,  str);
		person[i].age=a;
	}
	for(int i=0;i<3;i++){
		printf("Name: %s, Age: %d\n", person[i].name, person[i].age);
	}
	return 0;
}
