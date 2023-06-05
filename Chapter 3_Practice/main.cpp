// chuong 2 thuc hanh cau truc re nhanh
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
void intro()
{
	printf("________________________________________\n");
	printf("danh sach cac bai duoi day bao gom:\n");
	for (int u = 11; u <= 14; u++)
		printf("| bai %d\n", u);
	//printf("nhan so 0 de thoat chuong trinh\n");
	printf("\a_______________________________________");
}
int select_menu()
{
	int o;
	printf("\nban muon thuc hien bai nao? ");
	scanf_s("%d", &o);

	if (o >= 11 && o <= 35)
		return o;
	else
		return select_menu();
}
void resolve_menu()
{
	int o = select_menu();
	switch (o)
	{
	case 11:
	{
		float x1, x2, a, b, c, denta;
		printf("\nhay nhap ba he so: ");
		scanf_s("%f %f %f", &a, &b, &c);

		denta = pow(b, 2) - 4 * a * c;
		if (denta < 0)
			printf("\nphuong trinh vo nghiem");
		if (denta == 0)
		{
			x1 = (-b) / (2 * a);
			printf("\nphuong trinh co 1 nghiem kep la %.2f", x1);
		}
		else
		{
			x1 = (-b + sqrt(denta)) / (2 * a);
			x2 = (-b - sqrt(denta)) / (2 * a);
			printf("\nphuong trinh co 2 nghiem phan biet la %.2f va %.2f", x1, x2);
		}
	} break;
	case 12:
	{
		int a, b, c;

		printf("\amoi ban nhap 3 so bat ky: ");
		scanf_s("%d %d %d", &a, &b, &c);

		int max = a > b ? a : b;
		max = c > max ? c : max;
		int min = a < b ? a : b;
		min = c < min ? c : min;

		printf("\n\atrong 3 so co gia tri lon nhat la %d va gia tri nho nhat la %d", max, min);
	} break;
	case 13:
	{
		int toan, ly, hoa, van, anh, su;
		printf("nhap lan luot diem toan, ly, hoa, van, anh, su cua mot thi sinh: ");
		scanf_s("%d%d%d%d%d%d", &toan, &ly, &hoa, &van, &anh, &su);

		float dtb = (float)(toan + ly + hoa + van + anh + su) / 6;

		if (dtb >= 8 && toan >= 6.5 && ly >= 6.5 && hoa >= 6.5 && van >= 6.5 && anh >= 6.5 && su >= 6.5)
			printf("gioi");
		else if (dtb >= 7 && toan >= 5 && ly >= 5 && hoa >= 5 && van >= 5 && anh >= 5 && su >= 5)
			printf("kha");
		else if (dtb >= 5 && toan >= 3.5 && ly >= 3.5 && hoa >= 3.5 && van >= 3.5 && anh >= 3.5 && su >= 3.5)
			printf("tb");
		else
			printf("yeu");
	} break;
	case 14:
	{
		const float dgn = 20;
		const float dgd = 45;
		float gbd, gkt, tienca1, tienca2, tien;
		printf("nhap lan luot gio bat dau va gio ket thuc: ");
		scanf_s("%f%f", &gbd, &gkt);

		float giohat = gkt - gbd;

		if (gkt < gbd || gkt > 24 || gbd > 24)
			printf("gio bat dau va gio ket thuc khong hop le");
		else if (gbd < 10 || gkt < 10)
			printf("gio ay la gio nghi");
		else if (gbd >= 10 && gkt < 17)
		{
			tien = giohat * dgn;
			printf("so tien quy khach phai tra la %.0f 000", tien);
		}
		else if (gbd >= 17 && gkt < 24)
		{
			tien = giohat * dgd;
			printf("so tien quy khach phai tra la %.0f 000", tien);
		}
		else
		{
			tienca1 = (17-gbd)*dgn;
			tienca2 = (gkt-17)*dgd;
			tien = tienca1 + tienca2;
			printf("so tien quy khach phai tra la %.0f 000", tien);
		}
	} break;
	case 15:
	{	const float b1 = 5, b2 = 7, b3 = 10, b4 = 15, b5 = 20, m1=100, m2=150, m3=200, m4=300;
		float sd, tien;
		printf("nhap so dien ban da su dung trong thang nay: ");
		scanf_s("%f", &sd);

		if (sd<=m1)
		{
			tien = sd * m1;
			printf("tien dien quy khach phai tra la $%.0f", tien);
		}
		else if (sd>m1 && sd<=m2)
		{
			tien = m1 * b1 + (sd-m1) * b2;
			printf("tien dien quy khach phai tra la $%.0f", tien);
		}
		else if (sd>m2 && sd<=m3)
		{
			tien = m1 * b1 + (m2-m1) * b2 + (sd - m2) * b3;
			printf("tien dien quy khach phai tra la $%.0f", tien);
		}
		else if (sd>m3 && sd<=m4)
		{
			tien = m1 * b1 + (m2-m1) * b2 + (m3-m2) * b3 + (sd - m3) * b4;
			printf("tien dien quy khach phai tra la $%.0f", tien);
		}
		else if (sd>m4)
		{
			tien = m1 * b1 + (m2 - m1) * b2 + (m3 - m2) * b3 + (m4-m3) * b4 + (sd - m4) * b5;
			printf("tien dien quy khach phai tra la $%.0f", tien);
		}
	} break;
	case 16:
	{
		int a, b, c;
		printf("nhap vao ba canh cua mot tam giac: ");
		scanf_s("%d%d%d", &a, &b, &c);

		int a2 = pow(a, 2), b2 = pow(b, 2), c2 = pow(c, 2);
		int suma = b + c, sumb = a + c, sumc = a + b;
		int hieua = fabs(b - c), hieub = fabs(a - c), hieuc = fabs(a - b);

		if (a == b && b == c && a == c)
			printf("tam giac deu");
		else if (((a == b && c2 == a2 + b2) || (b == c && a2 == b2 + c2) || (a == c && b2 == a2 + c2)))
			printf("tam giac vuong can");
		else if ((a2 == b2 + c2) || (b2 == a2 + c2) || (c2 == a2 + b2))
			printf("tam giac vuong");
		else if (a == b || b == c || a == c)
			printf("tam giac can");
		else if
			((a > hieua&& a < suma) || (b > hieub && b < sumb) || (c > hieuc && c < sumc))
			printf("tam giac khong ton tai");
		else 
			printf("tam giac thuong");
	}break;
	case 0: exit(0); break;
	default:
		break;
	}
}
void main()
{
	intro();
	while (true)
		resolve_menu();
}