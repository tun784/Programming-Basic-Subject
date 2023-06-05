#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

//Title
void title() {
	printf("Cho mot mang 1 chieu chua cac so nguyen. \nHay viet mot chuong trinh cho phep nguoi dung chon mot trong cac yeu cau sau:\n");
	printf("1. Tao mot mang 1 chieu chua n so nguyen\n");
	printf("2. Xuat mot mang 1 chieu chua n so nguyen\n");
	printf("3. Tinh gia tri trung binh cac phan tu trong mang\n");
	printf("4. Xuat ra danh sach cac phan tu o vi tri chan trong mang\n");
	printf("5. Dem phan tu duong trong mang\n");
	printf("6. Dem so lan phan tu x xuat hien trong mang\n");
	printf("7. Tim vi tri cua gia tri x trong mang, x nhap tu ban phim\n");
	printf("8. Tim phan tu lon nhat/nho nhat trong mang\n");
	printf("9. Kiem tra mang so nguyen co ton tai gia tri 0 hay khong? Neu co thi tra ve 1, nguoc lai tra ve 0\n");
	printf("10. Tim so chan lon nhat trong mang, neu mang khong co so chan thi tra ve -1\n");
	printf("11. Dem so nguyen to trong mang\n");
}

int menu() {
	int d;
	printf("Ban muon lam bai nao ? Bai "); scanf_s("%d", &d);
	if (d < 0 || d>11)
		return menu();
	else
		return d;
}

void nhap(int arr[100], int n) {
	for (int i = 0; i < n; i++) {
		printf("a[%d]= ", i);
		scanf_s("%d", &arr[i]);
	}
}
void bai1_c1(int arr[100], int n) {
	for (int i = 0; i < n; i++)
	{
		printf("a[%d]= ", i); scanf_s("%d", &arr[i]);
	}
}
void bai1_c2(int arr[100], int n) {
	srand((int)time(0));
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void bai2(int arr[100], int n) {
	srand((int)time(0));
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
float bai3_tinh(int arr[100], int n) {
	int sum(0);
	for (int i = 0; i < n; i++)
		sum += arr[i];
	float kq = (float)sum / n;
	return kq;
}
void bai4_xuat(int arr[100], int n) {
	for (int i = 0; i < n; i++)
		if (i%2==0)
			printf("a[%d]= %d\n", i, arr[i]);
}
int bai5(int arr[100], int n) {
	int sum(0);
	for (int i = 0; i < n; i++)
		if (arr[i] > 0)
			sum += arr[100];
	return sum;
}
int bai6_xuly(int arr[100], int n, int m) {
	int sum(0);
	for (int i = 0; i < n; i++) {
		if (m == arr[i])
			sum += 1;
	}
	return sum;
}
void bai7(int arr[100], int n, int b){
	int x;
	for (int i = 0; i < n; i++)
		if (b == arr[i]) 
			x = arr[i];
		else
			continue;
	
		printf("Vi tri cua gia tri %d trong mang tren la %d\n", b, x);
}

void process() {
	int o = menu();
	switch (o)
	{
		case 1: 
		{
			printf("1. Tao mot mang 1 chieu chua n so nguyen\n");
			printf("Goi y: lam 2 cach\n\t\tCach 1: nhap gia tri phan tu mang.\n\t\tCach 2: dung lenh rand() de sinh so nguyen ngau nhien (rand() thuoc thu vien stdlib.h).\n");
			//
			Sleep(1000);
			int n;
			int a[100];
			printf("Ban muon tao mang co bao nhieu phan tu: "); scanf_s("%d", &n);
			while (n < 1)
			{
				printf("Kich thuoc mang khong hop le, vui long ban nhap lai: "); scanf_s("%d", &n);
			}
			printf("Cach 1:\n");
			bai1_c1(a,n);
			//
			printf("Cach 2:\n");
			bai1_c2(a, n);
			for (int i = 0; i < n; i++)
			{
				printf("a[%d]= %d\n", i, a[i]);
			}
		} break;
		case 2:
		{
			int n;
			int m[100];
			printf("2. Xuat mot mang 1 chieu chua n so nguyen\n");
			Sleep(1000);
			printf("Ban muon xuat mot mang co bao nhieu phan tu: "); scanf_s("%d", &n);
			while (n < 1)
			{
				printf("Kich thuoc mang khong hop le, vui long ban nhap lai: "); scanf_s("%d", &n);
			}
			bai2(m, n);
			for (int i = 0; i < n; i++)
			{
				printf("a[%d]= %d\n", i, m[i]);
			}
		}break;
		case 3:
		{
			int n;
			int m[100];
			printf("3. Tinh gia tri trung binh cac phan tu trong mang\n");
			Sleep(1000);
			printf("Ban muon tao mot mang co bao nhieu phan tu: "); scanf_s("%d", &n);
			while (n < 1)
			{
				printf("Kich thuoc mang khong hop le, vui long ban nhap lai: "); scanf_s("%d", &n);
			}
			printf("Vui long nhap kich thuoc cua mang 1 chieu: "); scanf_s("%d", &o);
			printf("Vui long nhap tung phan tu vao mang\n");
			nhap(m, n);
			float x = bai3_tinh(m, n);
			printf("Gia tri trung binh cac phan tu trong mang la %.2f\n", x);
		} break;
		case 4:
		{
			printf("4. Xuat ra danh sach cac phan tu o vi tri chan trong mang\n");
			Sleep(1000);
			int n;
			int b[100];
			printf("Ban muon tao mot mang co bao nhieu phan tu: "); scanf_s("%d", &n);
			while (n < 1)
			{
				printf("Kich thuoc mang khong hop le, vui long ban nhap lai: "); scanf_s("%d", &n);
			}
			nhap(b, n);
			printf("Danh sach cac phan tu o vi tri chan trong mang la\n");
			bai4_xuat(b, n);
		} break;
		case 5:
		{
			printf("5. Dem phan tu duong trong mang\n");
			Sleep(1000);
			int n;
			int z[100];
			printf("Ban muon tao mot mang co bao nhieu phan tu: "); scanf_s("%d", &n);
			while (n < 1)
			{
				printf("Kich thuoc mang khong hop le, vui long ban nhap lai: "); scanf_s("%d", &n);
			}
			nhap(z, n);
			printf("So phan tu duong co trong mang la %d\n", bai5(z, n));
		}break;
		case 6:
		{	
			printf("6. Dem so lan phan tu x xuat hien trong mang\n");
			Sleep(1000);
			int o, m, n;
			int mang[100];
			printf("Vui long nhap kich thuoc cua mang 1 chieu: "); scanf_s("%d", &o);
			while (o < 1)
			{
				printf("Kich thuoc mang khong hop le, vui long ban nhap lai: "); scanf_s("%d", &n);
			}
			printf("Vui long nhap tung phan tu vao mang\n");
			nhap(mang, o);
			printf("Chung ta co mang nhu sau:\n");
			for (int i = 0; i < o; i++)
			{
				printf("\t\ta[%d]= %d\n", i, mang[i]);
			}
			printf("Vui long nhap mot so bat ky: "); scanf_s("%d", &m);
			n = bai6_xuly(mang, o, m);
			printf("Phan tu %d xuat hien %d lan trong mang \n", m, n);
		}break;
		case 7: 
		{
			printf("7. Tim vi tri cua gia tri x trong mang, x nhap tu ban phim\n");
			Sleep(1000);
			int n,h;
			int array[100];
			printf("Ban muon tao mot mang co bao nhieu phan tu: "); scanf_s("%d", &n);
			while (n < 1)
			{
				printf("Kich thuoc mang khong hop le, vui long ban nhap lai: "); scanf_s("%d", &n);
			}
			nhap(array, n);
			printf("Ban muon tim vi tri cua so nao? "); scanf_s("%d", &h);
			bai7(array, n, h);
		}break;
	default:
		break;
	}
}

void main() 
{
	title();
	process();
}