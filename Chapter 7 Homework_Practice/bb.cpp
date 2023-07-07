#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int a[100], n;
char x[50];
void menu()
{
	printf("########-----------> MENU <-------------########\n");
	printf("Bai 1: ........\n");
	
	printf("Bai 4: ........\n");
	
	printf("Bai 7: ........\n");
	
	printf("Nhap 0 ------> THOAT\n");
}
void nhapmang(int a[], int& n)
{
	do
	{
		printf("Nhap so luong phan tu mang n(0<n<100): ");
		scanf_s("%d", &n);
	} while (n < 0 || n>100);
	printf("\nMang 1 chieu duoc tao: ");
	for (int i = 0; i < n; i++)
	{
		printf("\na[%d]=", i);
		scanf_s("%d", &a[i]);
	}
}
void xuatmang(int a[], int n)
{
	printf("Xuat mang: ");
	for (int i = 0; i < n; i++)
	{
		printf(" %d ", a[i]);
	}
}//Bai1:
void sochanlonnhat(int a[], int n)
{
	int max = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			if (max < a[i])
				max = a[i];
		}
	}
	if (max == INT_MIN)
		printf("Mang khong co so chan.\n");
	else
		printf("So chan lon nhat trong mang la: %d", max);
}
//Bai 4:
int PTnhonhat(int a[], int n)
{
	int min = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		if (min > a[i])
			min = a[i];
	}
	return min;
}
void vitrinhonhat(int a[], int n)
{
	printf("\nVi tri co phan tu nho nhat trong mang la: ");
	for (int j = 0; j < n; j++)
	{
		if (a[j] == PTnhonhat(a, n))
			printf(" %d ", j);
	}
}
//Bai 7:
int sochancuoicung(int a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] % 2 == 0)
		{
			return a[i];
		}
	}
	return -1;
}
void chonmenu(int k)
{
	switch (k)
	{
	case 1:
	{
		printf("Bai 1: \n");
		nhapmang(a, n);
		sochanlonnhat(a, n);
		printf("\n");
		break;
	}
	case 4:
	{
		printf("Bai 4: \n");

		vitrinhonhat(a, n);
		printf("\n");
		break;
	}
	case 7:
	{
		printf("Bai 7: \n");
		nhapmang(a, n);
		if (sochancuoicung(a, n) == -1)
			printf(" %d ", sochancuoicung(a, n));
		else
			printf("\nSo chan cuoi cung la: %d", sochancuoicung(a, n));
		printf("\n");
		break;
	}
	{
	default:
	case 0:
		break;
	}
	}
}
void xulymenu()
{
	int k;
	do
	{
		printf("Moi ban chon mot trong cac yeu cau sau: ");
		scanf_s("%d", &k);
		chonmenu(k);
	} while (k < 0 || k>10 || k != 0);
}
void main()
{
	menu();
	xulymenu();
	_getch();
}
