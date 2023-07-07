//Nguyen Hoang Tuan - STT34
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>

#define maxcol 100
#define maxrow 100
#define MAX 100
#define titlegh 60

//Tools
void textcolor(int n) {
	HANDLE m = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(m, n);
}
void nhapchuoi(char chuoi[MAX]) {
	textcolor(14);
	fflush(stdin);
	gets_s(chuoi, MAX);
}
void xuatchuoi(char chuoi[MAX]) {
	textcolor(14);
	puts(chuoi);
	printf("\n");
	fflush(stdin);
}
void nhapmang(int mang[], int n) {
	for (int i = 0; i < n; i++)
	{
		printf("A[%d]= ",i);
		scanf_s("%d", &mang[i]);
	}
}
void xuatmang(int mang[], int n) {
	for (int i = 0; i < n; i++)
		printf("A[%d]= %d", i, mang[i]);
}

// Chuong trinh
void title() {
	textcolor(12);
	printf("Phan mang 1 chieu chua so nguyen:	\n");	Sleep(10);
	textcolor(14);
	printf("19. Tinh tong cac gia tri co chu so hang chuc la chu so 5 trong mang. 	\n");	Sleep(10);
	printf("20. Tinh tong cac gia tri lon hon 2 gia tri lan can voi no trong mang. 	\n");	Sleep(10);
	printf("21. Cho biet su tuong quan giua so luong cac chu so chan va so luong cac chu so le trong mang 1 chieu cac so nguyen.	\n");	Sleep(10);
	printf("22. Ham tra ve -1: neu so luong cac chu so chan nhieu hon so luong cac chu so le	\n");	Sleep(10);
	printf("23. Ham tra ve 0: neu so luong cac chu so chan bang so luong cac chu so le	\n");	Sleep(10);
	printf("24. Ham tra ve 1: neu so luong cac chu so chan it hon so luong cac chu so le	\n");	Sleep(10);
	printf("25. Kiem tra mang so nguyen co ton tai hai gia tri 0 lien tiep nhau hay khong? Neu co thi tra ve 1, nguoc lai tra ve 0. 	\n");	Sleep(10);
	printf("26 Kiem tra mang so nguyen co ton tai toan la gia tri chan hay khong? Neu co thi tra ve 1, nguoc lai tra ve 0.	\n");	Sleep(10);
	printf("27. Sap xep cac phan tu cua mang so thuc sao cho cac phan tu tai cac vi tri la tang dan, cac phan tu tai cac vi tri chan thi giam dan. 	\n");	Sleep(10);
	printf("28. Them mot phan tu co gia tri x vao mang tang dan sao cho sau khi them x vao mang van tang dan.	\n");	Sleep(10);
	printf("29. Xoa tat ca cac phan tu trung nhau cua mang sao cho sau khi xoa chi giu lai duy nhat mot phan tu dai dien.	\n");	Sleep(10);
	printf("30. Dua tat ca cac phan tu 0 ve dau mang 31. Dua tat ca cac phan tu chan ve dau mang, cac phau tu le ve cuoi mang, cac phan tu 0 nam giua mang 32. Thay the tat ca cac phan tu lon nhat cua mang boi gia tri cua phan tu nho nhat va nguoc lai.	\n");	Sleep(10);
	printf("33. Liet ke cac gia tri chan trong mang thuoc doan [x, y] cho truoc.	\n");	Sleep(10);
	printf("34. Liet ke cac day con tang trong mang.	\n");	Sleep(10);
	printf("35. Liet ke cac day con toan duong co do dai lon hon 1.	\n");	Sleep(10);
	printf("36. Sap xep cac gia tri cua mang theo thu tu tang dan.	\n");	Sleep(10);
	printf("37. Xuat ra man hinh nhung gia tri la so chinh phuong.	\n");	Sleep(10);
	printf("38. Viet ham tim gia tri phan tu xuat hien nhieu nhat trong mang, neu co nhieu phan tu co so lan xuat hien bang nhau thi xuat phan tu dau tien.	\n");	Sleep(10);
	printf("39. Viet ham kiem tra mang co phai la mang tang khong 	\n");	Sleep(10);
	printf("40. Tim 'so chan nho nhat' trong mang. Neu mang khong co gia tri chan thi tra ve -1. \n");	Sleep(10);
	printf("41. Tim “mot vi tri ma gia tri tai vi tri do la gia tri nho nhat” trong. 	\n");	Sleep(10);
	textcolor(12);
	printf("Phan chuoi ky tu	\n");	Sleep(10);
	textcolor(14);
	printf("Nhap vao chuoi ho ten,	\n");	Sleep(10);
	printf("42. Xuat ho cua chuoi do.	\n");	Sleep(10);
	printf("43. Kiem tra chuoi tren co phai ten la “tan”. 44. Xuat tung thanh phan cua ho ten: ho, ten lot, ten	\n");	Sleep(10);
	printf("45. Gia su ten nhap vao deu co ten lot la “Thi” hoac “Van”. Hay cho biet ten nhap vao la ten nam hay nu.	\n");	Sleep(10);
	printf("46. Cho 2 chuoi si va s2:	\n");	Sleep(10);
	printf("47. Kiem tra xem chuoi s2 co la con cua s1, hoac nguoc lai.	\n");	Sleep(10);
	printf("48. Tim cac tu xuat hien trong ca 2 chuoi.	\n");	Sleep(10);
	printf("49. Tim tu xuat hien nhieu nhat trong s1. Neu trong s1 moi tu xuat hien 1 lan thi thong bao la khong co tu xuat hien nhieu nhat 50. Xoa cac tu xuat hien lan thu 2 tro di trong chuoi.	\n");	Sleep(10);
	printf("51. Chen s2 vao s1 tai vi tri k.	\n");	Sleep(10);
}
int option() {
	textcolor(11);
	int o;
	printf("Ban muon thuc hien yeu cau nao? "); scanf_s("%d", &o);
	while (!(o==0 || o==19 || o==26)) {
		printf("Ban da nhap sai, yeu cau ban nhap lai: "); scanf_s("%d", &o);
	}
	return o;
}
//Cac bai
int bai19(int a[], int n) {
	int x,sum = 0;
	for (int i = 0; i < n; i++)
	{
		x = (a[i] / 10) % 10;
		if (x==5)
			sum += a[i];
	}
	return sum;
}
int bai26(int a[], int n) {
	int x;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
		{
			x = 0; break;
		}
		else
			x = 1;
	return x;
}
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
			printf("\n");
			textcolor(0);
			exit(0);
		} break;
		case 19: {
			int n;
			int a[MAX];
			printf("Xin moi nhap kich thuoc cua mang: ");
			scanf_s("%d", &n);
			nhapmang(a, n);
			int x = bai19(a, n);
			printf("Tong cac chu so co chu so hang chuc la chu so 5 la %d\n", x);
		}break;
		case 26: {
			int n;
			int a[MAX];
			printf("Xin moi nhap kich thuoc cua mang: ");
			scanf_s("%d", &n);
			nhapmang(a, n);
			int x = bai26(a, n);
			if (x == 0)
				printf("Mang co chua gia tri le\n");
			else
				printf("Mang co ton tai toan la gia tri chan\n");
		}break;
	default:
		break;
	}
}
int main() {
	title();
	while (true)
	{
		process();
	}
	return 0;
}
