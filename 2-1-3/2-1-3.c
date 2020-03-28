#include <stdio.h>

void rotateLeft(int* pa, int* pb, int* pc) {
	int a = *pa;
	*pa = *pb;
	*pb = *pc;
	*pc = a;
	return;
}

void rotateRight(int* pa, int* pb, int* pc) {
	int a = *pa;
	*pa = *pc;
	*pc = *pb;
	*pb = a;
	return;
}

int main(void) {
	int a = 10, b = 20, c = 30;
	int arr[] = { a, b, c };
	int select = 0;
	while (1) {
		printf("%d:%d:%d\n", *(arr), *(arr + 1), *(arr + 2));
		scanf("%d", &select);
		if (select == 1)
			rotateLeft(arr, arr + 1, arr + 2);
		else if (select == 2)
			rotateRight(arr, arr + 1, arr + 2);
		else
			break;
	}
	return 0;
}
