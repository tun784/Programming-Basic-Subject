#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

void flushStdin() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

typedef struct HocSinh{	
	char mshs[10];
	char hoten[35];
	int namsinh;
	int gioiTinh;
	char malop[25];
}HocSinh;

void input(int a[], int n){
	HocSinh hs;
	flushStdin();

	for (int i = 0; i < n; i++){
		printf("Hoc sinh thu %d:\n",i+1);
		printf("MSHS: "); gets(hs.mshs);
		printf("Ho va ten hoc sinh: "); gets(hs.hoten);
		printf("Nam sinh: "); scanf_s("%d",&hs.namsinh);
		printf("Gioi tinh(Nam: 1, Nu: 0): "); scanf_s("%d",&hs.gioiTinh);
		flushStdin();
		printf("Ma lop: "); gets(hs.malop);
	}
}
int kiemtrahs(char ten[]){
	HocSinh hs;

	if (hs.gioiTinh == 1 && hs.malop == "12A1")
		return 1;
	else
		return 0;
}
int demhs(int n){
	HocSinh hs;
	int dem=0;
	for (int i = 0; i < n; i++)
		if (hs.namsinh > 2003)
			dem++;
	return dem;
}
int main(){
	printf("Hello world\n");
	HocSinh hs;
	int n, gioiTinh, a[50];
	char ten[25];
	printf("Nhap so luong hoc sinh: "); scanf_s("%d",&n);
	input(a,n);
	printf("Nhap ten hoc sinh can tim: "); gets(ten);
	if (kiemtrahs(ten) == 1)
		printf("Co\n");
	else
		printf("Khong\n");
	int ketqua = demhs(n);
	printf("\nCo %d hoc sinh sau nam 2003.\n",ketqua);
	return 0;
}
