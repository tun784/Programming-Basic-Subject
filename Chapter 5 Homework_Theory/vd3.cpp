#include<stdio.h>
//#define _crt_secure_no_warings
int main() {
	int arr[100][100];
	int n, m;
	printf("nhap vao so hang: ");
	scanf_s("%d", &n);
	printf("nhap vao so cot: ");
	scanf_s("%d", &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("a[%d][%d] = ", i, j);
			scanf_s("%d", &arr[i][j]);
		}
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] % 5 == 0) {
				sum += arr[i][j];
			}
		}
	}

	printf("Tong cac phan tu chia het cho 5 cua ma tran da nhap: %d\n", sum);

	return 0;
}
