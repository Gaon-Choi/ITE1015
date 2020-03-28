#include <iostream>
#include <string>
using namespace std;

void swap(int& n1, int& n2) {
	int s;
	s = n1;
	n1 = n2;
	n2 = s;
	return;
}

void swap(string& s1, string& s2) {
	string s;
	s = s1;
	s1 = s2;
	s2 = s;
	return;
}

int main(void) {
	int n1, n2;
	string s1, s2;
	cin >> n1 >> n2 >> s1 >> s2;
	cout << "n1: " << n1 << ", n2: " << n2 << ", s1: " << s1 << ", s2: " << s2 <<endl;
	swap(n1, n2);
	swap(s1, s2);
	cout << "n1: " << n1 << ", n2: " << n2 << ", s1: " << s1 << ", s2: " << s2 << endl;
	return 0;
}
