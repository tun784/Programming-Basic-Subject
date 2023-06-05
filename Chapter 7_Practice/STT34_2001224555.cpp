// Nguyen Hoang Tuan - STT:34 - Thuc Hanh Nguyen Ly Ngon Ngu Lap Trinh - Lop: 13DHTH09 - MSSV: 2001224555
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS
#define maxcol 100
#define maxrow 100
#define titlegh 60
#define MAX 100
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
// Tools
void textcolor(int x) {
	HANDLE m = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(m, x);
}
void random(int arr[][maxcol], int m, int n) {
	srand((int)time(0));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			arr[i][j] = rand();
}
void inputstring(char str[]) {
	textcolor(14);
	fflush(stdin);
	printf("Moi nhap chuoi: ");
	gets_s(str, MAX);
}
void outputstring(char str[]) {
	textcolor(12);
	printf("Xuat chuoi: %s\n", str);
}
void inputarray(int a[], int& n)
{
	printf("Vui long nhap kinh thuoc cua mang:"); scanf_s("%d", &n);
	while (n < 1) {
		printf("Kich thuoc khong hop le, vui long nhap kinh thuoc cua mang:"); scanf_s("%d", &n);
	}
	for (int i = 0; i < n; i++)
	{
		printf("a[%d]=", i);
		scanf_s("%d", &a[i]);
	}
}
void outputarray(int a[], int n) {
	printf("mang da nhap:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
}
void inputmatrix(int arr[][maxcol], int &m, int &n) {
	textcolor(10);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("A[%d][%d]= ", i, j);
			scanf_s("%d", &arr[i][j]);
}}}
void outputmatrix(int arr[][maxcol], int m, int n) {
	textcolor(9);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("A[%d][%d]= %d ", i, j, arr[i][j]);	Sleep(40);
		} printf("\n");
	}
}
int hlookup(int arr[][maxcol], int m, int n, int x) {
	int rl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (x == arr[i][j]) {
				rl = i;
			}
		}
	}
	return rl;
}
int vlookup(int arr[][maxcol], int m, int n, int x) {
	int cl;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if (x==arr[i][j]){
				cl = j;
			}
		}
	}
	return cl;
}
void VDmang1chieu(int arr[maxcol], int n) {
	
	int x = (sizeof(arr) / sizeof(arr[0]));
	int y = sizeof(arr);
	int z = sizeof(arr[0]);
	printf("%d\n%d\n%d\n", x, y, z);
}
void VDmang2chieu(int arr[][maxcol], int n)
{
	int x = (sizeof(arr) / sizeof(arr[0]));
	int y = (sizeof(arr[0]) / sizeof(arr[0][0]));
	int z = sizeof(arr);
	int t = sizeof(arr[0]);
	int u = sizeof(arr[0][0]);
	printf("%d\n%d\n%d\n%d\n%d\n", x, y, z, t, u);
	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
	{
		for (int j = 0; j < (sizeof(arr[0]) / sizeof(arr[0][0])); j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
}
// Parts
void title() {
	const int gh1 = 21, gh2 = 25;
	textcolor(12);
	for (int i = 1; i <= titlegh; i++)
		printf("#");
	printf("\n");
	for (int i = 1; i <= gh1; i++)
		printf("#");
	printf(" BAI TAP TREN LOP ");
	for (int i = 1; i <= gh1; i++)
		printf("#");
	printf("\n");
	for (int i = 1; i <= titlegh; i++) 
		printf("#");
	printf("\n");
	textcolor(14);
	printf("Bai 1: Cho mot ma tran chua cac so nguyen. Viet mot chuong trinh (dang menu) thuc hien cac yeu cau sau:\n"); Sleep(90);
	printf("1. Tao ngau nhien gia tri cho cac phan tu trong mang.\n"); Sleep(90);
	printf("2. Xuat gia tri cac phan tu cua ma tran ra man hinh.\n"); Sleep(90);
	printf("3. Tim vi tri cua gia tri x trong ma tran, x nhap tu ban phim.\n"); Sleep(90);
	printf("4. Tim phan tu max cua dong k trong ma tran.\n"); Sleep(90);
	printf("5. Dem phan tu duong trong ma tran.\n"); Sleep(90);
	for (int i = 1; i <= gh2; i++)
		printf("#");
	printf(" TERMINAL ");
	for (int i = 1; i <= gh2; i++)
		printf("#");
	printf("\n");
}
int option() {
	textcolor(11);
	int o;
	printf("Ban muon thuc hien yeu cau nao? "); scanf_s("%d", &o);
	while (o < 0 || o>5) {
		printf("Ban da nhap sai, yeu cau ban nhap lai: "); scanf_s("%d", &o);
	}
	return o;
}
void ktmang() {
	int mang[maxcol], n;
	printf("Vui long nhap kich thuoc cua mang: ");
	scanf_s("%d", &n);
}
// Main Program
void process() {
	int o = option();
	textcolor(10);
	switch (o)
	{
		case 0: {
			textcolor(15);
			printf("Nhan bat ky phim nao de thoat chuong trinh\n");
			for (int i = 1; i <= titlegh; i++)
				printf("*");
			textcolor(8);
			exit(0);
		} break;
		case 1:	{
			printf("1. Tao ngau nhien gia tri cho cac phan tu trong mang.\n");
			int matran[maxrow][maxcol];
			int m, n;
			printf("Vui long nhap so dong cua ma tran: "); scanf_s("%d", &m);
			printf("Vui long nhap so cot cua ma tran: "); scanf_s("%d", &n);
			random(matran, m, n);
			printf("Tao ngau nhien cac gia tri cho cac phan tu cho ma tran:\n");
			outputmatrix(matran, m, n);
		}break;
		case 2: {
			printf("2. Xuat gia tri cac phan tu cua ma tran ra man hinh.\n");
			int matran[maxrow][maxcol];
			int m, n;
			printf("Vui long nhap so dong cua ma tran: "); scanf_s("%d", &m);
			printf("Vui long nhap so cot cua ma tran: "); scanf_s("%d", &n);
			inputmatrix(matran, m, n);
			printf("Xuat cac gia tri cho cac phan tu cho ma tran:\n");
			outputmatrix(matran, m, n);
		}break;
		case 3: {
			int c, r;
			printf("3. Tim vi tri cua gia tri x trong ma tran, x nhap tu ban phim.\n");
			int matran[maxrow][maxcol];
			int m, n, x;
			printf("Vui long nhap so dong cua ma tran: "); scanf_s("%d", &m);
			printf("Vui long nhap so cot cua ma tran: "); scanf_s("%d", &n);
			inputmatrix(matran, m, n);
			printf("Moi ban nhap gia tri x bat ky: "); scanf_s("%d", &x);
			r = hlookup(matran, m, n, x);
			c = vlookup(matran, m, n, x);
			printf("Vi tri cua gia tri %d trong ma tran la: %d\n", x, matran[r][c]);
		}break;
	default: {
		const int gh = 50;
		textcolor(15); 
		printf("Nhan bat ky phim nao de thoat chuong trinh\n");
		for (int i = 1; i <= gh; i++)
			printf("*");
		textcolor(8);
		exit(0); }
		break;
	}
}

int main() {
	title();
	while (true)
		process();
	return 0;
}