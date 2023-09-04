#include <stdio.h>
#include <conio.h>
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
	for (int i = 0; i < n; i++)
	{
		printf("Hoc sinh thu %d:\n",i+1);
		flushStdin();
		printf("MSHS: "); gets_s(hs.mshs,10);
		flushStdin();
		printf("Ho va ten hoc sinh: "); gets_s(hs.hoten,35);
		flushStdin();
		printf("Nam sinh: "); scanf_s("%d",&hs.namsinh);
		flushStdin();
		printf("Gioi tinh(Nam: 1, Nu: 0): "); scanf_s("%d",&hs.gioiTinh);
		flushStdin();
		printf("Ma lop: "); gets_s(hs.malop,25);
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
	HocSinh hs;
	int n, gioiTinh, a[50];
	char ten[25];
	printf("Nhap so luong hoc sinh: "); scanf_s("%d",&n);
	input(a,n);
	printf("Nhap ten hoc sinh can tim: "); gets_s(ten,35);
	if (kiemtrahs(ten) == 1)
		printf("Co\n");
	else
		printf("Khong\n");
	int ketqua = demhs(n);
	printf("\nCo %d hoc sinh sau nam 2003.\n",ketqua);
	return 0;
}