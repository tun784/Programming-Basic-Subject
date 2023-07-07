#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#define MAX 100
void menu()
{
	printf("**********************");
	printf("\nMoi ban cho bai can lam:");
	printf("\nbai 1:");
	printf("\nbai 2:");
	printf("\nbai 3:");
	printf("\nbai 4:");
}
void nhap_mang(int a[], int &n)  
{
	do
	{
		printf("nhap so phan tu:");
		scanf_s("%d", &n);
	} while (n < 0);
	for (int i = 0; i < n; i++)
	{
		printf("a[%d]=", i);
		scanf_s("%d", &a[i]);
	}
}
void xuat_mang(int a[], int n)
{
	printf("mang da nhap:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
}
//bai 3
int SNT(int n)
{
	int dem = 0;

	for (int i = 1; i <= n; i++)
	if (n%i == 0)
		dem++;
	if (dem == 2)
		return 1;
	else
		return 0;
}
void Min(int a[], int n)
{
	int Min = INT_MAX;
	for (int i = 0; i<n; i++)
	{
		if (SNT(a[i]) == 1)
		{
			if (Min>a[i])
				Min = a[i];
		}
	}
	if (Min == INT_MAX)
		printf("\nMang khong co so nguyen to");
	else 
	printf("\nSo nguyen to nho nhat cua mang la: %d", Min);
}
//bai 5
bool KiemTraNguyenTo(int n)
{
	if (n < 2)
	{
		return false;
	}
	else if (n > 2)
	{
		if (n % 2 == 0)
		{
			return false;
		}
		for (int i = 3; i <= sqrt((float)n); i += 2)
		{
			if (n % i == 0)
			{
				return false;
			}
		}
	}
	return true;
}
int demnguyento(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (KiemTraNguyenTo(a[i]) == true && a[i] < 100)
		{
			dem++;
		}
	}
	return dem;
}
//bai 8
void daomang(int a[], int n)
{
	printf("\nMang dao nguoc:");
	for (int i = n - 1; i >= 0; i --)
	{
		printf("%d", a[i]);
	}
}
//bai 10
void themvitribatki(int a[], int n)
{
	int x, t;
	printf("\nNhap gia tri x=");
	scanf_s("%d", &x);
	do
	{
		printf("\nNhap vi tri cua x can chen (0 <= x <= n):");
		scanf_s("%d", &t);
	} while (t<0 || t>n);
	int size = sizeof(a) / sizeof(a[0]);
	if (n == size)
		printf("\nKhong the chen them phan tu vi da vuot qua so luong phan tu qui dinh");
	else
	{
		n++;
		for (int i = n - 1; i = t; i--)
		{
			a[i] = a[i - 1];
		}
		a[t] = x;
	}
}

void chon_menu(int k)
{
	switch (k)
	{
	case 1:
	{
			  printf("\nBai 2: Tim so nguyen to nho nhat trong mang\n");
			  int a[100];
			  int n;
			  nhap_mang(a, n);
			  Min(a, n);
	} break;
	case 2:
	{
			  printf("\nBai 5: Dem so nguyen to trong mang\n");
			  int n;
			  int a[MAX];
			  nhap_mang(a, n);
			  int dem = demnguyento(a, n);
			  printf("\nCo %d so nguyen to trong mang", dem);
	}
		break;
	case 3:
	{
			  int a[100];
			  int n;
			  printf("\nBai 8: Dao nguoc cai gia tri mang\n");
			  nhap_mang(a, n);
			  daomang(a, n);
	}
		break;
	case 4:
	{
			  printf("\nbai 10: Them vao mang gia tri X tai vi tri.");
			  int a[100];
			  int n;
			  nhap_mang(a, n);
			  themvitribatki(a, n);
			  xuat_mang(a, n);
			  printf("\n");
	}
	default:
		break;
	}
}
void xuly_menu()
{
	int t;
	do
	{
		printf("\nNhap bai can giai:");
		scanf_s("%d", &t);
		chon_menu(t);
	} while (t<0 || t > 10 || t != 0);
}
void main()
{
	menu();
	xuly_menu();
	_getch();
}
