#include <iostream>
#include <math.h>
#include <cstring>
void MagicSquare(int **mat, int u) {
	int i = 0;	//행
	int j;	//열
	j = u / 2;
	int size = u*u;	// mat의 원소 수
	int size_ = u;	// N
	int n = 1;

	while (n <= size_ * size_) {
		mat[i][j] = n++;
		bool x, y;
		if (i - 1 == -1) {
			i += (size_ - 1);
			x = true;
		}
		else {
			i -= 1;
			x = false;
		}
		if (j + 1 == size_) {
			j -= (size_ - 1);
			y = true;
		}
		else {
			j += 1;
			y = false;
		}
		if (mat[i][j] != 0) {
			if (x == true)
				i -= (size_ - 1);
			else i += 1;
			if (y == true)
				j += (size_ - 1);
			else j -= 1;
			i += 1;
		}
	}
	return;
}
int main(void) {
	int N;
	std::cin >> N;
	while (1) {
		if (N % 2 == 0 || N < 3)
			break;
		else {
			int** mat = new int* [N];
			for (int i = 0; i < N; i++)
				mat[i] = new int[N];
			for (int i = 0; i < N; i++) {
				memset(mat[i], 0, sizeof(int) * N);
			}
			MagicSquare(mat, N);
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++)
					std::cout << mat[i][j] << " ";
				std::cout << "\n";
			}
			for (int i = 0; i < N; i++)
				delete[] mat[i];
			delete[] mat;
		}
		break;
	}
	return 0;
}
