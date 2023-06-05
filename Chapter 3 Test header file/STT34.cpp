#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <bai1trenlop.h>
#include <bai2trenlop.h>
#include <bai3trenlop.h>
#include <bai4trenlop.h>
#include <bai5trenlop.h>
#include <bai4onha.h>
#include <bai5onha.h>
#include <bai6onha.h>

void introduction()
{
	printf("Duoi day la danh sach cac bai tap Chuong 3\n");
	printf("Bai tap tren lop:\n");
	printf("Bai 1: Tinh tong cac so chan nho hon so nguyen duong n\n");
	printf("Bai 2: Dem so nguyen duong nho hon n chia het cho 3 (n la so nguyen duong)\n");
	printf("Bai 3: Menu cho phep nguoi dung thuc hien cac bieu thuc\n");
	printf("Bai 4: Xuat cac so nguyen la boi cua 7 va co dung 2 chu so\n");
	printf("Bai 5: Xuat cac so nguyen co dung 3 chu so va tong cac chu so la chan\n");
}	
int option()
{
	int o;
	printf("1. Bai tap tren lop. \n2. Bai tap ve nha. \n");
	printf("Ban muon lam bai tap tren lop hay bai tap ve nha ? \n");
	scanf_s("%d",&o);
	if (o>=1 && o<=2)
		return o;
	else return option();
}
void resolve()
{
	int u = option();
	switch (u)
{
	case 1:
		{  int k;
			printf("Ban muon lam bai nao tu 1 toi 5? ");
			scanf_s("%d",&k);
			
			switch (k)
			{
			case 1: bai1trenlop(); break;
			case 2: bai2trenlop(); break;
			case 3: bai3trenlop(); break;
			case 4: bai4trenlop(); break;
			case 5: bai5trenlop(); break;
			default: printf("Sai bai\n");
				break;
			} break;
		} break;
	case 2:
		{
			int k;
			printf("Ban muon lam bai nao tu 4 toi 6? ");
			scanf_s("%d",&k);
			
			switch (k)
			{
			case 1: bai4onha(); break;
			case 2: bai5onha(); break;
			case 3: bai6onha(); break;
			default: printf("Sai bai\n");
				break;
			} break;
		}break;
	default: printf("Sai bai\n"); break;
}
void main()
{
	introduction();
	option();
	resolve();
	_getch();
}
