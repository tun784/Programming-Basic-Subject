#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
void tc(int x){
	HANDLE m = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(m, x);
}
void title() {
	tc(12);
	printf("BAI TAP VE NHA:\a\n"); Sleep(100);
	tc(9);
	printf("Cho mot mang 1 chieu chua cac so thuc. Hay viet mot chuong trinh cho phep nguoi dung chon mot trong cac yeu cau sau:\a\n"); Sleep(100);
	printf("1. Tao mot mang 1 chieu chua n so thuc (nhap tu ban phim va sinh tu dong ngau nhien.\a\n"); Sleep(100);
	printf("2. Xuat mot mang 1 chieu chua n so thuc.\a\n"); Sleep(100);
	printf("3. Tinh tong cac gia tri mang.\a\n"); Sleep(100);
	printf("4. Tinh gia tri trung binh cac phan tu trong mang.\a\n"); Sleep(100);
	printf("5. Tinh tong cac gia tri duong trong mang.\a\n"); Sleep(100);
	printf("6. Dao nguoc cac gia tri mang.\a\n"); Sleep(100);
	printf("7. Kiem tra tinh doi xung cua mang. \n\tNeu mang khong doi xung thi tra ve -1.\a\n"); Sleep(100);
	printf("8. Viet ham tim gia tri phan tu xuat hien nhieu nhat trong mang, neu co nhieu phan tu co so lan xuat hien bang nhau thi xuat phan tu dau tien.\a\n"); Sleep(100);
	printf("9. Viet ham kiem tra mang co phai la mang tang khong.\a\n"); Sleep(100);
}
int option() {
	int max = 7;
	tc(10);
	int o;
	do {
		printf("Ban muon chon bai nao? ");
		scanf_s("%d", &o);
	} while (o < 0 || o > max);
		return o;
}
float input(float arr[100], int &h) {
	tc(14);
	for (int i = 0; i < h; i++)
	{
		printf("A[%d]= ", i);
		scanf_s("%f", &arr[i]);
	}
	return arr[100];
}
int sizearr() {
	int n;
	float a[100];
	printf("Ban muon tao mot mang co bao nhieu phan tu: "); scanf_s("%d", &n);
	while (n < 1)
	{
		printf("Kich thuoc mang khong hop le, vui long ban nhap lai: "); scanf_s("%d", &n);
	}
	input(a, n);
	return n;
}
void bai1_tudong(int b[30], int n) {
	srand((int)time(0));
	for (int i = 0; i < n; i++)
	{
		b[i] = rand();
	}
}
void bai2(float a[100], int f) {
	for (int i = 0; i < f; i++)
		printf("F[%.2f]= \n", a[i]);
}
void program() {
	int o = option();
	switch (o)
	{
	case 0: {tc(13); printf("Thoat chuong trinh");  exit(0); } break;
		case 1:
		{
			int n;
			do {
				printf("Ban muon nhap tao mang thu cong hay tu dong? ");
				scanf_s("%d", &n);
			} while (n<1 && n>2);
			switch (n)
				{
				case 1:
					sizearr(); break;
				case 2:
				{
					int n;
					int b[30];
					printf("Ban muon tao mot mang co bao nhieu phan tu: "); scanf_s("%d", &n);
					while (n < 1)
					{
						printf("Kich thuoc mang khong hop le, vui long ban nhap lai: "); scanf_s("%d", &n);
					}
					bai1_tudong(b, n);
					for (int i = 0; i < n; i++)
					{
						printf("B[%d]= %d\n", i, b[i]);
					}
				}break;
				default: exit(0);
					break;
				}
		}break;
		case 2:
		{
			float m[100];
			int n;
			printf("Ban muon tao mot mang co bao nhieu phan tu: "); scanf_s("%d", &n);
			while (n < 1)
			{
				printf("Kich thuoc mang khong hop le, vui long ban nhap lai: "); scanf_s("%d", &n);
			}
			input(m, n);
			for (int i = 0; i < n; i++)
			{
				printf("A[%d] = %.2f\n", i, m[i]);
			}
		}break;
		case 3:
		{
			float m[100];
			int n;
			float sum(0);
			printf("Ban muon tao mot mang co bao nhieu phan tu: "); scanf_s("%d", &n);
			while (n < 1)
			{
				printf("Kich thuoc mang khong hop le, vui long ban nhap lai: "); scanf_s("%d", &n);
			}
			input(m, n);
			for (int i = 0; i < n; i++)
				sum += m[i];
			printf("Tong cac gia tri cua mang la %.2f\n", sum);
		}break;
		case 4:
		{
			float m[100];
			int n;
			float sum(0);
			printf("Ban muon tao mot mang co bao nhieu phan tu: "); scanf_s("%d", &n);
			while (n < 1)
			{
				printf("Kich thuoc mang khong hop le, vui long ban nhap lai: "); scanf_s("%d", &n);
			}
			input(m, n);
			int s =sizeof m[0];
			for (int i = 0; i < s; i++)
				sum += (float) m[i];
			float output = (float) sum / s;
			printf("Kich thuoc cua mang la %d\n", sizeof m[0]+1);
			printf("Gia tri trung binh cua mang la: %.2f\n", output);
		}break;
		case 5:
		{
			float m[100];
			int n;
			float sum(0);
			printf("Ban muon tao mot mang co bao nhieu phan tu: "); scanf_s("%d", &n);
			while (n < 1)
			{
				printf("Kich thuoc mang khong hop le, vui long ban nhap lai: "); scanf_s("%d", &n);
			}
			input(m, n);
			int s = sizeof m[0];
			for (int i = 0; i < s; i++)
				if (m[i] > 0)
					sum += (float)m[i];
			printf("Tong cac gia tri duong trong mang la: %.2f\n", sum);
		}break;
		case 6:
		{
			float m[100];
			int n,i,j;
			float sum(0), t;
			printf("Ban muon tao mot mang co bao nhieu phan tu: "); scanf_s("%d", &n);
			while (n < 1)
			{
				printf("Kich thuoc mang khong hop le, vui long ban nhap lai: "); scanf_s("%d", &n);
			}
			input(m, n);
			printf("Dao nguoc cac gia tri cua mang:\n");
			for (j=n-1;j>=0;j--)
				printf("A[%d]= %.2f\n", j, m[j]);
		}break;
		case 7:
		{
			float m[100];
			int n, j;
			float sum(0), t;
			printf("Ban muon tao mot mang co bao nhieu phan tu: "); scanf_s("%d", &n);
			while (n < 1)
			{
				printf("Kich thuoc mang khong hop le, vui long ban nhap lai: "); scanf_s("%d", &n);
			}
			input(m, n);
			for (int i = n - 1; i >= 0; i--)
			{
				if (m[i - 1] > m[i])
				{j = 1; break;}
				else
					j = 0;
			}
			if (j == 1)
				printf("Mang khong la mang tang\n");
			else
				printf("Mang la mang tang\n");
		}break;
		default: return program();
		break;
	}
}
void main() {
	title();
	while (true)
	{
		program();
	}
}
