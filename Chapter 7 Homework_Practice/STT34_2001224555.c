#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
#define dela 200
// Tools
void tc(int n){
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, n);
}
void inputstring(char str[]){
	tc(14);
	fflush(stdin);
	printf("Moi nhap chuoi: ");
	gets_s(str,MAX);
}
void outputstring(char str[]){
	tc(12);
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
// Parts
void title(){
	tc(7);
	const int gh = 15;
	const int titlegh = 98;

	tc(12);
	for (int i = 1; i <= titlegh; i++)
		printf("*");
	printf("\n ");
	for (int i = 1; i <= gh; i++)
		printf("#");
	for (int i = 1; i <= gh; i++)
		printf("-"); 
	printf(">");

	printf(" PHA MANG MOT CHIEU CHUA SO NGUYEN ");

	printf("<");
	for (int i = 1; i <= gh; i++)
		printf("-");
	for (int i = 1; i <= gh; i++)
		printf("#");
	printf("\n");
	for (int i = 1; i <= titlegh; i++)
		printf("*");
	printf("\n\n");
	tc(7);
	printf("1. Tim so chan lon nhat trong mang.\n");
	printf("2. Tim so nguyen to nho nhat trong mang.\n");
	printf("3. Tim vi tri cua gia tri x trong mang, x nhap tu phim.\n");
	printf("4. Tim vi tri phan tu nho nhat trong mang.\n");
	printf("5. Dem so nguyen to trong mang.\n");
	printf("6. Tim \"vi tri cua gia tri chan dau tien\" trong mang 1 chieu cac so nguyen. Neu mang khong co gia tri chan nao thi tra ve -1.\n");
	printf("7. Tim \"so chan cuoicung\" cua mang. Neu mang khong co gia tri chan thi tra ve -1.\n");
	printf("8. Dao nguoc cac gia tri mang.\n");
	printf("9. Kiem tra tinh doi xung cua mang.\n");
	printf("10. Them vao mang 1 gia tri x tai vi tri vt (kiem tra tinh hop le cua ct).\n");
	tc(12);	printf("PHAN CHUOI KY TU\n");	tc(7);
	printf("11. Chuan hoa chuoi (xoa cac ky tu trong thua: cac ky tu trong dau va cuoi chuoi, giua 2 tu chi co 1 ky tu trong).\n");
	printf("12. Dem so tu trong chuoi.\n");
	printf("13. Doi chuoi ve dang viet hoa ky tu dau tu va viet thuong cac ky tu con lai.\n");
	printf("14. Dao nguoc chuoi.\n");
	printf("15. Xuat tung tu trong chuoi, moi tu la 1 dong.\n");
	printf("16. Xoa tat ca khoang trang trong chuoi.\n");
	printf("17. Dem so cac ky tu dac biet (khong phai ky tu va chu so) trong chuoi.\n");
	printf("18. Xoa tat ca cac ky tu dac biet (khong phai ky tu va ky so) trong chuoi.\n\n");
}
int option(){
	tc(10);
	char str[MAX];
	int x;
	printf("Ban muon lam bai nao? "); scanf_s("%d", &x);
	while (x<0 || x>18)
		printf("Bai khong hop le, vui long ban nhap lai: "); scanf_s("%d", &x);
	return x;
}

//Bai1
int sochanlonnhat(int a[], int n)
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
		return max;
}
//bai 2
int SNT(int n){
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return 1;
	else
		return 0;
}
int Min(int a[], int n){
	int min = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		if (SNT(a[i]) == 1)
		{
			if (min > a[i])
				min = a[i];
		}	}
	return min;
}
//bai 3
int solanxh(int a[], int n, int x) {
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (x == a[i])
			dem++;
	return dem;
}
int vitriX(int a[], int n, int x) {
	int kq=0;
	for (int c = 1; c <= solanxh(a, n, x); c++)
	{
		for (int i = 0; i < n; i++)
			if (x == a[i])
				kq = x;
	}
	return kq;
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
		if (KiemTraNguyenTo(a[i]) == true && a[i] < MAX)
		{
			dem++;
		}
	}
	return dem;
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
//bai 8
void daomang(int a[], int n)
{
	printf("\nMang dao nguoc:");
	for (int i = n - 1; i >= 0; i--)
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
//Bai 11
void ChuanHoaChuoi(char x[])
{
	int n = strlen(x);
	//Xoa ky tu trong cuoi chuoi
	for (int i = 0; i < n; i++)
	{
		if (x[i] == ' ')
		{
			for (int j = i; j < n - 1; j++)
			{
				x[j] = x[j + 1];
			}
			x[n - 1] = NULL;
			i--;
			n--;
		}
		else break;
	}
	//Xoa ky tu trong dau chuoi
	for (int i = n - 1; i >= 0; i--)
	{
		if (x[i] == ' ')
		{
			x[i] = NULL;
			n--;
		}
		else break;
	}
	//Xoa ky tu trong khong hop le (giua 2 tu chi co 1 ky tu trong)
	for (int i = 1; i < n - 1; i++)
	{
		if (x[i] == x[i + 1]) {
			for (int j = i; j < n - 1; j++) {
				x[j] = x[j + 1];
			}
			x[n - 1] = NULL;
			i--;
			n--;
		}
	}
}
//bai 12: Dem so tu trong chuoi
void DemSoTuTrongChuoi(char x[])
{
	int i;
	int soTu = 0;
	for (i = 0; i < strlen(x) - 1; i++)
	{
		if (x[i] == ' ' && x[i + 1] != ' ')
		{
			soTu++;
		}
	}
	if (x[0] != ' ')
	{
		soTu++;
	}
	printf("\nChuoi \"%s\" co %d tu.", x, soTu);
}
//bai 14: Dao nguoc chuoi
int Length(char s[])
{
	int i = 0;
	while (s[i] != NULL)
		++i;
	return i;
}
char* DaoNguoc(char str[])
{
	int length = Length(str);
	char* temp = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		temp[i] = str[length - 1 - i];
	}
	temp[length] = NULL;
	return temp;
}

void InDaoNguoc(char str[])
{
	int length = Length(str);
	printf("\nChuoi sau khi dao nguoc la: ");
	for (int i = length - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
}

void InHoaKyTuDau(char s[])
{
	int i;
	if (s[0] != ' ')
	{
		s[0] = s[0] - 32;
		for (i = 1; i < strlen(s); i++)
		{
			if (s[i] == ' ' && s[i + 1] != ' ' && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	else
	{
		for (i = 0; i < strlen(s); i++)
		{
			if (s[i] == ' ' && s[i + 1] != ' ' && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	printf("%s", s);
}

void bai14(char str[]){
	for (int i = strlen(str); i >= 0; --i){
		putchar(str[i]);
	}
	printf("\n");
}
int bai17(char str[]){
	int dem = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (((str[i] >= 33 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126)))
			dem += 1;
	}
	return dem;
}
void bai18(char str[]){
	for (int i = 0; i < strlen(str); i++)
		if (!((str[i] >= 33 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126)))
			putchar(str[i]);
	printf("\n");
}

void ct() {
	int o = option();
	tc(9);
	switch (o)
	{
		case 0: {
			tc(7);
			printf("Thoat chuong trinh ");
			for (int i = 1; i <= 3; i++)
			{
				Sleep(dela); printf(". ");
			}exit(0);
		}break;
		case 1: {
			printf("1. Tim so chan lon nhat trong mang.\n");
			int a[MAX];
			int n;
			inputarray(a, n);
			int kq = sochanlonnhat(a, n);
			if (kq == INT_MIN)
				printf("Mang khong co so chan.\n");
			else
				printf("So chan lon nhat trong mang la: %d\n", sochanlonnhat(a, n));
		}break;
		case 2: {
			printf("\nBai 2: Tim so nguyen to nho nhat trong mang\n");
			int a[MAX];
			int n;
			inputarray(a, n);
			int kq = Min(a, n);
			if (kq == INT_MAX)
				printf("\nMang khong co so nguyen to\n");
			else
				printf("\nSo nguyen to nho nhat cua mang la: %d\n", Min(a, n));
		}break;
		case 3: {
			int a[MAX], x,n;
			printf("3. Tim vi tri cua gia tri x trong mang, x nhap tu phim.\n");
			inputarray(a, n);
			printf("Moi ban nhap gia tri can tim: "); scanf_s("%d", &x);
			printf("Phan tu %d xuat hien %d trong mang tren: ");
			if (solanxh(a, n, x) == 1)
				printf("%d\n",vitriX(a,n,x));
			else
			{
				printf("Bao gom: ");
				for (int i = 0; i < solanxh(a,n,x); i++)
				{
					printf(", %d",vitriX(a,n,x));
					x++;
				}
				printf("\n");				
			}
		}break;
		case 4: {
			printf("Bai 4: \n");
			int a[MAX];
			int n;
			inputarray(a, n);
			vitrinhonhat(a, n);

		}break;
		case 5: {
			printf("\nBai 5: Dem so nguyen to trong mang\n");
			int n;
			int a[MAX];
			inputarray(a, n);
			int dem = demnguyento(a, n);
			printf("\nCo %d so nguyen to trong mang", dem);
		}break;
		case 6: {

		}break;
		case 7: {
			printf("Bai 7: \n");
			int a[MAX];
			int n;
			inputarray(a, n);
			if (sochancuoicung(a, n) == -1)
				printf(" %d ", sochancuoicung(a, n));
			else
				printf("\nSo chan cuoi cung la: %d", sochancuoicung(a, n));

		}break;
		case 8: {
			int a[MAX];
			int n;
			printf("\nBai 8: Dao nguoc cai gia tri mang\n");
			inputarray(a, n);
			daomang(a, n);
		}break;
		case 9: {

		}break;
		case 10: {
			printf("\nbai 10: Them vao mang gia tri X tai vi tri.");
			int a[MAX];
			int n;
			inputarray(a, n);
			themvitribatki(a, n);
			outputarray(a, n);
		}break;
		case 11: {

		}break;
		case 12: {

		}break;
		case 13: {

		}break;
		case 14: {
			char s[MAX];
			inputstring(s);
			bai14(s);
		} break;
		case 17: {
			char s[MAX];
			inputstring(s);
			printf("So luong ky tu dac biet trong chuoi tren la %d\n", bai17(s));
		}break;
		case 18: {
			char s[MAX];
			inputstring(s);
			bai18(s);
		}break;
		default:
		{
			tc(7);
			printf("Thoat chuong trinh ");
			for (int i = 1; i <= 3; i++)
			{
				Sleep(dela); printf(". ");
			}exit(0);

		}break;
	}
}
int main(){
	title();
	while (true)
	{
		ct();
	}
	return 0;
}
