#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>

void textcolor(int x) {
	HANDLE m = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(m, x);
}
struct sinhvien {
	char hoten[50];
	char lop[20];
	int mssv;
	int solanvang;
};
struct date { int d, m, y; };
struct sinhvien_ns {
	char mssv[20];
	char hoten[50];
	date ns;
};

void flush_stdin() {
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

void inputsv(sinhvien a[], int n) {
	textcolor(9);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap sinh vien thu %d:\n", i+1);
		flush_stdin();
		printf("Nhap ho ten: "); gets_s(a[i].hoten);
		printf("Nhap ten lop: "); gets_s(a[i].lop);
		printf("Nhap ma so sinh vien: "); scanf_s("%d", &a[i].mssv);
		printf("Nhap so lan vang mat: "); scanf_s("%d", &a[i].solanvang);
	}
}
void outputsv(sinhvien a[], int n) {
	textcolor(14);
	for (int i = 0; i < n; i++)
	{
		printf("Xuat sinh vien thu %d:\n",i+1);
		printf("Xuat ma so sinh vien: %d\n", a[i].mssv);
		printf("Xuat ho va ten: %s\n", a[i].hoten);
		printf("Xuat so lan vang mat: %d\n", a[i].solanvang);
	}
}
void timsvvang(sinhvien a[], int n) {
	textcolor(10);
	for (int i = 0; i < n; i++)
	{
		if (a[i].solanvang < 3)
		{
			printf("Xuat sinh vien thu %d:\n", i+1);
			printf("MSSV: %d\n", a[i].mssv);
			printf("Ten: %s\n", a[i].hoten);
			printf("Xuat so lan vang mat: %d\n\n", a[i].solanvang);
		}
	}
}
void main() {
	// VD1
	sinhvien a[100];
	int n;
	textcolor(12);
	printf("Nhap so luong sinh vien: "); scanf_s("%d", &n);
	inputsv(a, n);
	outputsv(a, n);
	timsvvang(a, n);
	
	// VD2
	sinhvien_ns x;
	printf("Nhap ngay sinh cua sinh vien x:"); scanf_s("%d%d%d", &x.ns.d, &x.ns.m, &x.ns.y);
	_getch();
}