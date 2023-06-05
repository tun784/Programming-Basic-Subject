#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

void menu()
{
	printf("Sau day la danh sach cac bai:\n_____________________________________\n");
	printf("Bai 13: Tinh diem trung binh va xep loai hoc sinh\n");
	printf("Bai 14: Tinh tien karaoke\n");
	printf("Bai 15: Tinh tien dien\n");
	printf("Bai 16: Tam giac\n");
	printf("Bai 17: Diem trung binh cho mon hoc Thuc hanh Nhap mon Lap trinh\n");
	printf("Bai 18: Diem trung binh chung trong HK1 cua SV\n");
}
int chonmenu()
{
	int o;
	printf("Ban muon lam bai nao? ");
	scanf_s("%d", &o);
	if (o >= 13 && 0 <= 18)
		return o;
	else
		return chonmenu();
}
void xulymenu()
{
	int o = chonmenu();
	switch (o)
	{
		case 13:
		{
			float t, l, h, v, a, s, tb;

			printf("Moi nhap lan luot diem Toan, Ly, Hoa, Van, Anh, Su: ");
			scanf_s("%f%f%f%f%f%f", &t, &l, &h, &v, &a, &s);

			tb = (t + l + h + v + a + s) / 6.0;
			printf("Diem trung binh cua hoc sinh do la %.1f\n", tb);
			if (tb >= 8 && t >= 6.5 && l >= 6.5 && h >= 6.5 && v >= 6.5 && a >= 6.5 && s >= 6.5)
				printf("Loai gioi\n");
			else if (tb >= 7 && t >= 5 && l >= 5 && h >= 5 && v >= 5 && a >= 5 && s >= 5)
				printf("Loai kha\n");
			else if (tb >= 7 && t >= 3.5 && l >= 3.5 && h >= 3.5 && v >= 3.5 && a >= 3.5 && s >= 3.5)
				printf("Loai TB\n");
			else printf("Loai Yeu\n");
		} break;

		case 14:
		{	const float dgt = 20, dgs = 45;
			float gbd, gkt, giohat, tien, tienca1, tienca2;
			printf("Moi ban nhap lan luot gio bat dau va gio ket thuc: ");
			scanf_s("%f%f", &gbd, &gkt);
			giohat = gkt - gbd;
			if ((gbd < 10 || gkt < 10) || (gbd > 0 && gbd < 10) || (gkt > 0 && gkt < 10))
				printf("Gio nghi\n");
			else if (gbd > 24 || gkt > 24)
				printf("Gio khong hop le\n");
			else if (gbd >= 10 && gkt <= 17)
			{
				tien = giohat * dgt;
				printf("Tong tien quy khach phai tra la %.0f 000\n", tien);
			}
			else if (gbd > 17 && gkt <= 24)
			{
				tien = giohat * dgs;
				printf("Tong tien quy khach phai tra la %.0f 000\n", tien);
			}
			else if (gbd < 17 && gkt > 17)
				tienca1 = (17 - gbd) * dgt;
				tienca2 = (gkt - 17) * dgs;
				tien = tienca1 + tienca2;

				printf("Tong tien quy khach phai tra la %.0f 000\n", tien);
		}break;
		
		case 15:
		{
			const float b1 = 5, b2 = 7, b3 = 10, b4 = 15, b5 = 20;
			const float m1 = 100, m2 = 150, m3 = 200, m4 = 300;
			float sd,tien;

			printf("Moi ban nhap so dien da su dung trong thang vua qua: ");
			scanf_s("%f", &sd);

			if (sd <= 0)
				printf("So dien khong hop le");
			else if (sd<=m1)
			{
				tien = sd * b1;
				printf("Tien dien quy khach phai tra la $%.0f\n", tien);
			}
			else if (sd>m1 && sd<=m2)
			{
				tien = m1 * b1 + (sd - m1) * b2;
				printf("Tien dien quy khach phai tra la $%.0f\n", tien);
			}
			else if (sd>m2 && sd<=m3)
			{
				tien = m1 * b1 + (m2-m1) * b2 + (sd - m2) * b3;
				printf("Tien dien quy khach phai tra la $%.0f\n",tien);
			}
			else if (sd>m3 && sd<=m4)
			{
				tien = m1 * b1 + (m2-m1) * b2 + (m3-m2) * b3 + (sd - m3) * b4;
				printf("Tien dien quy khach phai tra la $%.0f\n", tien);
			}
			else if (sd>m4)
			{
				tien = m1 * b1 + (m2-m1) * b2 + (m3-m2) * b3 + (m4-m3) * b4 + (sd - m4) * b5;
				printf("Tien dien quy khach phai tra la %.0f 000\n", tien);
			}
		}break;

		case 16:
		{
			unsigned int a, b, c;
			unsigned int a2, b2, c2;

			printf("Moi ban nhap lan luot a, b, c: ");
			scanf_s("%u%u%u", &a, &b, &c);

			a2 = pow(a, 2);
			b2 = pow(b, 2);
			c2 = pow(c, 2);

			unsigned int suma = b + c, sumb = a + c, sumc = a + b;
			unsigned int hieua = fabs(b - c), hieub = fabs(a - c), hieuc = fabs(a - b);

			if ((hieua < a && a < suma) || (hieub < b && b < sumb) || (hieuc < c && c < sumc))
				printf("Tam giac khong ton tai\n");
			else if (a == b && b == c && c == a)
				printf("Tam giac deu\n");
			else if ((a2=b2+c2 && b==c) || (b2=a2+c2 && a==c) || (c2=a2+b2 && a==b))
				printf("Tam giac vuong can\n");
			else if ((a2=b2+c2) || (b2=a2+c2) || (c2=a2+b2))
				printf("Tam giac vuong\n");
			else if (a==b || b==c || c==a)
				printf("Tam giac can\n");
			else printf("Tam giac thuong\n");
		} break;
		case 17:
		{	const float scd = 4;
		float c1, c2, c3, c4, dtb;
		printf("Vui long nhap lan luot bon cot diem: ");
		scanf_s("%f%f%f%f", &c1, &c2, &c3, &c4);
		dtb = (c1 + c2 + c3 + c4) / scd;

		if (c1 <= 10 || c2 <= 10 || c3 <= 10 || c4 <= 10)
		{
			if (dtb > 10)
				printf("Diem trung binh: %.1f (khong hop le)", dtb);
			else if (dtb <= 10 && dtb >= 8.5)
				printf("Diem trung binh: %.1f\nDiem A\n", dtb);
			else if (dtb < 8.5 && dtb >= 7.0)
				printf("Diem trung binh: %.1f\nDiem B\n", dtb);
			else if (dtb < 7.0 && dtb >= 5.5)
				printf("Diem trung binh: %.1f\nDiem C\n", dtb);
			else if (dtb < 5.5 && dtb >= 4.0)
				printf("Diem trung binh: %.1f\nDiem D\n", dtb);
			else if (dtb < 4.0 && dtb >= 0)
				printf("Diem trung binh: %.1f\nDiem F\n", dtb);
		}
		else printf("Diem khong hop le\n");
		} break;

		case 18:
		{
			
		}break;
		case 0: exit(0); break;
		default:
		break;
	}
}
void main()
{
	menu();
	while (true)
		xulymenu();
	_getch();
}