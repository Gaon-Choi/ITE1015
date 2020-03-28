#include <iostream>
using namespace std;

void getSumDiff(int a, int b, int* pSum, int* pDiff) {
	*pSum = a + b;
	*pDiff = a - b;
	return;
}

int main(void) {
	int a = 0, b = 0, sum, diff;
	cin >> a >> b;
	getSumDiff(a, b, &sum, &diff);
	cout << "sum: " << sum << "\n";
	cout << "diff: " << diff << "\n";
	return 0;
}
