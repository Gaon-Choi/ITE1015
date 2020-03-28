#include <iostream>
using namespace std;

void swap(int& n1, int& n2) {
        int n = n1;
        n1 = n2;
        n2 = n;
        return;
}

int main(void) {
        int N;
        cin >> N;
        while (N > 0) {
                int* arr = new int[N];
                for (int i = 0; i < N; i++)
                        cin >> *(arr + i);
                for (int l=0; l < N - 1; l++) {
                        for (int i = 0; i < N - l -1; i++) {
                                if (arr[i] > arr[i + 1])
					swap(arr[i], arr[i + 1]);
                        }
                }
                for (int i = 0; i < N; i++)
                        cout << arr[i] << " ";
                cout << "\n";
	       	break;
                delete[]arr;
        }
        return 0;
}
   
