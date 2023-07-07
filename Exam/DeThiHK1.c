#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
void tc(int x) {
	HANDLE m = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(m, x);
}
void title() {
	tc(12);
	printf("De 2\n"); Sleep(100);
	tc(9);
	printf("1. Viet chuong trinh cho phep nguoi dung nhap vao mot so nguyen n.\n\tKiem tra xem n la so am hay so duong.\n"); Sleep(100);
	printf("2. Viet chuong trinh cho phep nguoi dung nhap vao mot so nguyen duong n, neu nhap sai yeu cau nhap lai cho den khi dung.\n\tKiem tra xem n co chua toan cac chu so tang dan tu trai qua phai hay khong.\n"); Sleep(100);
	printf("3. Xet mang mot chieu A gom n so nguyen. Hay cai dat cac ham thuc hien cac chuc nang sau:\n\t"); Sleep(100);
	printf("Nhap n phan tu tu ban phim.\n\t"); Sleep(100);
	printf("Xuat cac phan tu cua mang A ra man hinh.\n\t"); Sleep(100);
	printf("Dem xem trong mang co bao nhieu phan tu le va chia het cho 3.\n\t"); Sleep(100);
	printf("Tim phan tu co gia tri duong nho nhat trong mang\n\a"); Sleep(100);
}
int option() {
	tc(10);
	int o;
	do {
		printf("Ban muon lam cau nao? "); scanf("%d", &o);
	} while (o < 0 || o>3);
		return o;
}
void input(int arr[100], int &h) {
	tc(14);
	for (int i = 0; i < h; i++)
	{
		printf("A[%d]= ",i);
		scanf("%d", &arr[i]);
	}
}
int cau1(int x) {
	if (x < 0)
		return 0;
	else
		return 1;
}
int cau2(long n) {
	int c,j,x;
	j = 0;
	while (n != 0)
	{
		c = n % 10;
		x = (n / 10) % 10;
		if (c < x)
		{
			j = 1; break;
		}
		n = n / 10;
	}
	return j;
}
void cau3b(int arr[100], int& h) {
	tc(7);
	for (int i = 0; i < h; i++)
		printf("A'[%d]= %d\n", i, arr[i]);
	tc(14);
}
int cau3c(int arr[100], int &h) {
	int dem=0;
	for (int i = 0; i < h; i++)
		if ((arr[i] %2 != 0) && (arr[i] %3 == 0) && (arr[i] > 0))
			dem += 1;
	return dem;
}
int cau3d(int arr[100], int& h) {
	int m[100];
	int j=0;
	for (int i = 0; i < h; i++)
	{
		if (arr[i]>0)
		{
			m[j] = arr[i]; j++;
		}
	}
	printf("So luong so duong trong mang la %d bao gom:\n", j);
	for (int q = 0; q < j; q++)
		printf("M[%d]= %d\n", q, m[q]);
	int min = m[0];
	for (int x = 0; x < j; x++)
		if (min > m[x])
			min = m[x];
	return min;
}
void process() {
	int o = option();
	tc(14);
	switch (o)
	{
		case 0: {
			tc(13); 
			printf("Thoat chuong trinh");  
			exit(0);
		} break;
		case 1: {
			int x;
			printf("Moi ban nhap so nguyen bat ky: ");
			scanf("%d", &x);
			int n = cau1(x);
			if (n == 0)
				printf("%d la so am\n", x);
			else
				printf("%d la so duong\n", x);
		}break;
		case 2: {
			long n;
			printf("Moi ban nhap so nguyen duong bat ky: ");
			scanf("%lu", &n);
			while (n < 1)
			{
				printf("Day khong phai so nguyen duong\n\tYeu cau ban nhap lai: "); scanf("%lu", &n);
			}
			int x = cau2(n);
			if (x == 0)
				printf("%lu chua toan cac chu so tang dan\n", n);
			else
				printf("%lu khong chua toan cac chu so tang dan\n", n);
		}break;
		case 3: {
			int n;
			printf("Moi ban nhap kich thuoc cua mang: ");
			scanf("%d", &n);
			int a[100];
			printf("Nhap cac phan tu cua mang A:\n");
			input(a, n);
			printf("Xuat cac phan tu cua mang A:\n");
			cau3b(a, n);
			printf("Mang co %d phan tu le va chia het cho 3\n", cau3c(a, n));
			printf("Phan tu co gia tri duong nho nhat la %d\n", cau3d(a, n));
		}
	default: return process();
		break;
	}
}
int main() {
	title();
	while (true)
		process();
return 0;	
}
