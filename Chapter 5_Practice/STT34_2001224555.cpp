// STT 34 - 2001224555
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARING
void intro()
{
	int i, gh(7);
	printf("Trong cac bai ");
	for (i = 1; i < gh; i++)
		printf("%d, ", i);
	printf("va %d", i);
}
int menu()
{
	int h,gh(7);
	printf("\nBan vui long chon bai ban muon lam: ");
	scanf_s("%d", &h);
	if (h<0 && h>gh)
		return menu();
	else 
		return h;
}
// bai 1 tren lop
float bai1(int a,int b,int c)
{
	float p = (float)(a + b + c) / 2;
	float s = (float)( sqrt( p * (p - a) * (p - b) * (p - c) ) );
	
return s;
}

// bai 2 tren lop
int bai2_1(int n)
{
	int sum(0);
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			sum += i;
	return sum;
}
void bai2_2(int month, int year)
{
	while (month > 12)
	{
		printf("Vui long nhap lan luot thang va nam bat ky: ");
		scanf_s("%d%d", &month, &year);
	}
	if ((year % 400 == 0) ||
		((year % 4 == 0) && (year % 100 != 0)))
	{
		switch (month)
		{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("Thang %d co 31 ngay\n", month); break;
		case 4: case 6: case 9: case 11:
			printf("Thang %d co 30 ngay\n", month); break;
		case 2: printf("Thang %d co 29 ngay\n", month); break;
		default: printf("Thang %d khong hop le\n", month);
			break;
		}
	}
	else
	{
		switch (month)
		{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("Thang %d co 31 ngay\n", month); break;
		case 4: case 6: case 9: case 11:
			printf("Thang %d co 30 ngay\n", month); break;
		case 2: printf("Thang %d co 28 ngay\n", month); break;
		default: printf("Thang %d khong hop le\n", month);
			break;
		}
	}
}
void bai2_3(int x, int y)
{
	int swap;
	swap = x;
	x = y;
	y = swap;
}
int bai2_4(int a,int b)
{
	int x = a;
	int y = b;
	while (a!=b)
	{
		if (a>b)
			a = a - b;
		else
			b = b - a;
	}
	int bcnn = abs(x * y) / a;
	return bcnn;
}
bool bai2_5(int n)
{
	int temp;
	while (n > 0)
	{
		temp = n % 10;
		if (temp % 2 == 0)
			return true;
		n /= 10;
	}
	return false;
}
int bai2(int u)
{
	printf("Trong cac yeu cau:\n");
	for (int i = 1; i <= 5; i++)
		printf("Yeu cau 2.%d\n", i);
	printf("Ban muon lam yeu cau nao? ");
	scanf_s("%d", &u);
	switch (u)
	{
		case 1:
		{ int n;
			printf("Vui long nhap so nguyen duong bat ky: ");
			scanf_s("%d", &n);

			printf("Tong cac uoc cua so %d la %d\n", n,bai2_1(n));
		}break;
		case 2:
		{
			int month, year;
			printf("Vui long nhap lan luot thang va nam bat ky: ");
			scanf_s("%d%d", &month, &year);
			bai2_2(month,year);
		} break;
		case 3:
		{
			int x, y;
			printf("Vui long nhap 2 so nguyen bat ky: ");
			scanf_s("%d%d", &x, &y);
			bai2_3(x, y);
			printf("2 so nguyen sau khi doi thu tu la %d va %d\n",x,y);
		}break;
		case 4:
		{
			int a, b;
			printf("Nhap 2 so nguyen bat ky: ");
			scanf_s("%d%d", &a, &b);

			printf("BCNN cua 2 so %d va %d la %d\n", a, b, bai2_4(a,b));
		}break;
		case 5:
		{
			int m;
			do
			{
				printf("\nVui long nhap so nguyen duong bat ky: ");
				scanf_s("%d", &m);
				if (m < 0)
				{
					printf("\nSo %d phai >= 0, vui long nhap lai: ",m);
					scanf_s("%d", &m);
				}
			} while (m < 0);
			bai2_5(m);
			if (bai2_5(m) == true)
				printf("So %d co it nhat 1 chu so chan", m);

			else
				printf("So %d co cac chu so toan la chu so le", m);
		}break;
		default: return bai2(u);
		break;
	}
}
int bai3_ktSNT(int u)
{
	int sum(0);
	if (u < 2)
		return sum;
	for (int i = 1; i <= u; i++)
		if (u % i == 0)
			sum++;
	if (sum == 2)
		return 1;
	return 0;
}
int bai3_tinh(int n)
{
	int sum(0);
	for (int i = 0; i < n; i++)
		if (bai3_ktSNT(i) ==1)
			sum += i;
	return sum;
}
int bai4(int l)
{
	int sum(0);
	for (int i = 1; i <= l; i++)
	{
		if ((float)sqrt(i) == sqrt(i))
			sum += i;
	}
	return sum;
}
float bai5(int b)
{
	double sum(0);
	for (int i = 1; i <= b; i++)
		sum = sqrt(2 + sum);
	return sum;
}
float bai6(int y)
{
	if (y == 1)
		return 1;
	return bai6(y - 1) + 1 / y;
}
int bai7(int n)
{
	if (n == 1)
		return 1;
	return n * bai7(n - 1);
}
void ctchinh()
{
	int o = menu();
	switch (o)
	{
	case 1:
	{	int a, b, c;
		do
		{
			printf("Vui long nhap ba canh cua tam giac bat ky: ");
			scanf_s("%d%d%d", &a, &b, &c);
		} while (not( (a+b>c) && (a+c>b) && (b+c>a) ));
		
		printf("Dien tich tam giac la %.2f", bai1(a, b, c));
	}break;
	case 2:
	{bai2(o);}break;
	case 3:
	{	int n;
		do
		{
			printf("Hay nhap so nguyen duong bat ky: ");
			scanf_s("%d", &n);
		} while (n<=0);
		printf("Tong cac so nguyen to nho hon %d la %d", n, bai3_tinh(n));
	}break;
	case 4:
	{
		int z;
		do
		{
			printf("Hay nhap so nguyen duong bat ky: ");
			scanf_s("%d", &z);
		} while (z <= 0);

		printf("Tong cac so chinh phuong nho hon %d la %d", z, bai4(z));
	}break;
	case 5:
	{	
		int h;
		printf("Vui long nhap so nguyen bat ky: ");
		scanf_s("%d", &h);
		printf("S(%d) = %.2f", h, bai5(h));
	}break;
	case 6:
	{	int g;
		printf("Nhap so nguyen bat ky: ");
		scanf_s("%d", &g);
		printf("Tong cac phan so 1 + 1/");
		for (int i = 2; i <= g; i++)
			printf("i + 1/");
		printf(" la %.2f", bai6(g));
	}break;
	case 7:
	{	int t;
		printf("Vui long nhap so nguyen bat ky: ");
		scanf_s("%d", &t);
		printf("Giai thua cua %d! la %d", t, bai7(t));
	}break;
	case 0: exit(0); break;
	default: return ctchinh();
		break;
	}
}
void main()
{
	intro();
	while (true)
		ctchinh();
}