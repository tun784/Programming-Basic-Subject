//Chuong 1 Sach Thuc Hanh
#define _CRT_SECURE_NO_WARNINGS
#include	<stdio.h>
#include	<conio.h>
#include	<math.h>
#include	<time.h>
#include	<stdlib.h>
void intro()
{
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\nDanh sach cac bai duoi day bao gom:");
	for (int u = 1; u <= 10; u++)
		printf("\n| Bai %d", u);
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\nNhap so 0 de thoat chuong trinh");
}
int select_menu()
{
	int o;
	printf("\nBan muon thuc hien bai nao? ");
	scanf_s("%d", &o);

	if (o >= 0 && o <= 12)
		return o;
	else
		return select_menu();
}
void resolve_menu()
{
	int o = select_menu();
	switch (o)
	{
		//// Bai tap o lop
		//		case 11:
		//			{
		//			printf("Que huong la chum khe ngot\n");
		//			printf("Cho con treo hai moi ngay\n");
		//			printf("Que huong la duong di hoc\n");
		//			printf("Con ve rop buom vang bay.\n");
		//			printf("\n");
		//			printf("Que huong la con dieu biec\n");
		//			printf("Tuoi tho con tha tren dong\n");
		//			printf("Que huong la con do nho\n");
		//			printf("Em dem khua nuoc ven song.\n"); 
		//			} break;
		//		case 12:
		//			{float x;
		//
		//			printf("Moi nhap 1 so bat ky: \a");
		//				scanf_s("%f", &x);
		//
		//			int xx = (int)x;
		//			printf("\n\aPhan nguyen cua so do la %d", xx); 
		//			} break;
		//		case 13:
		//			{const float pi = 3.1418;
		//			float r, p, s;
		//
		//				printf("\aMoi ban nhap ban kinh hinh tron: ");
		//					scanf_s("%f", &r);
		//
		//				p = 2 * pi * r;
		//				s = pi * pow(r, 2);
		//
		//				printf("\n\achu vi hinh tron la %.2f va dien tich hinh tron la %.2f", p, s); 
		//			} break;
		//		case 14:
		//			{int a, b;
		//				printf("\aMoi ban nhap 2 so bat ky: ");
		//					scanf_s("%d %d", &a, &b);
		//
		//				int max = a > b ? a : b;
		//
		//				printf("\n\aSo lon nhat trong 2 so la %d", max);
		//			} break;
		//		case 15:
		//			{int a, b;
		//			printf("\aNhap 2 so nguyen a, b: ");
		//			scanf_s("%d %d", &a, &b);
		//
		//			float x = (float)a / b;
		//
		//				printf("\n\aThuong cua a chi cho b: %.6f", x);
		//				printf("\n\aLam tron thuong: %.0f", x);
		//				printf("\n\aIn thuong voi mot so thap phan: %.1f", x);
		//			} break;
		//		case 16:
		//			{int x;
		//			const int dgt = 500000, dgn = 100000; // don gia tuan va don gia ngay
		//				printf("Tinh tien thue phong\n\a");
		//				printf("Don gia tuan: %d. Don gia ngay: %d", dgt, dgn);
		//				printf("\n\aNhap vao tong so ngay thue phong: ");
		//					scanf_s("%d", &x);
		//
		//			int st  = x / 7;
		//			int sn  = x % 7;
		//			int tst = dgt * st + dgn * sn;
		//
		//				printf("\n\aSo tuan ma khach thue: %d, so ngay khach thue: %d", st, sn);
		//				printf("\n\aTien phai tra: %d", tst);
		//			} break;
		//		case 17:
		//			{const int g = 200000; // mot gio = 200k
		//			 const int b = 20000;  // mot gio = 20k
		//			 int sg, sb;
		//
		//				printf("\aNhap lan luot so gio va so binh nuoc: ");
		//					scanf_s("%d %d", &sg, &sb);
		//
		//			int tt = g * sg + b * sb;
		//
		//				printf("\n\aTong tien phai tra: %d", tt);
		//			} break;
		//		case 18:
		//			{int tuoi, ns, nht; // tuoi, namsinh va nam hien tai
		//
		//				printf("\aNhap tuoi cua ban: ");
		//					scanf_s("%d ", &tuoi);
		//
		//						time_t t = time(0);
		//						tm* Now = localtime(&t);
		//						nht = Now -> tm_year + 1900;
		//
		//						ns = nht - tuoi;
		//
		//				printf("\n\aNam sinh cua ban la %d", ns);
		//			} break;
		//		case 19:
		//			{int a, b, c, d;
		//
		//				printf("\aNhap lan luot 4 so nguyen: ");
		//					scanf_s("%d %d %d %d", &a, &b, &c, &d);
		//
		//						int t2sd = a + b;
		//						int h2sc = c - d;
		//						int t2sc = c + d;
		//
		//						float thg = (float)t2sd / t2sc;
		//
		//				printf("\n\aThuong voi 0 so thap phan la %.0f va voi 1 so thap phan la %.1f", thg, thg);
		//			} break;
		//		case 20:
		//			{int ns, tuoi;
		//				printf("\aNhap nam sinh cua ban: ");
		//					scanf_s("%d", &ns);
		//
		//						time_t t = time(0);
		//						tm* Now = localtime(&t);
		//						int nht = Now->tm_year + 1900;
		//
		//					tuoi = nht - ns;
		//
		//			if (tuoi >= 18)
		//				printf("\n\adu tuoi di lam");
		//			else
		//				printf("\n\acon tuoi di hoc");
		//			} break;
		//		case 21:
		//			{float f;
		//			 int x;
		//				printf("\avui long nhap an so: ");
		//					scanf_s("%d", &x);
		//
		//			if (2 * x + 1 != 0)
		//			{
		//				f = (float)(3 * pow(x, 2) + 4 * x + 5) / (2 * x + 1);
		//				printf("\n\aket qua cua ham f(x) la %.2f", f);
		//			}
		//			else
		//				printf("\n\aham so vo dinh");
		//			} break;
		//		case 22:
		//			{int x;
		//			 float f;
		//
		//				printf("\aNhap an so: ");
		//					scanf_s("%d", &x);
		//
		//			if
		//				(5 * pow(x, 2) - 3 != 0)
		//			{
		//				f = (float)(3 * pow(x, 5) + 2 * x + sqrt(x + 1)) / (5 * pow(x, 2) - 3);
		//				printf("\n\aGia tri ham so f(x) la %.2f", f);
		//			}
		//			else
		//				printf("\n\aHam so vo dinh");
		//			} break;

		// Bai tap ve nha
				// bai1
	case 1:
	{
		float x;
		printf("\aNhap mot so thuc bat ky: ");
		scanf_s("%f", &x);
		int xx = (int)x;
		float c = (float)x - xx;
		int cc = (int)c * 100;
		int tong = xx + cc;
		printf("\n\aPhan nguyen cua so thuc la %d", xx);
		printf("\n\aSo thuc voi 2 so thap phan: %.2f", x);
		printf("\n\a2 so thap phan cua so thuc la %d", cc);
		printf("\n\aTong 2 phan nguyen va 2 so thap phan la %d", tong);
	} break;
	// bai2
	case 2:
	{
		char tensp[30];
		int sl, dg;
		printf("\aNhap san pham: "); scanf_s("%s", tensp);
		printf("Nhap lan luot so luong va don gia: ");
		scanf_s("%d %d", &sl, &dg);
		int tien = sl * dg;
		float vat = (float)(sl * dg) / 10;
		printf("\n\aSan pham %s co tien va thue GTGT phai tra lan luot la %d va %.1f", tensp, tien, vat);
	} break;
	// bai3
	case 3:
	{
		float toan, ly, hoa, hst, hsl, hsh;
		printf("\aNhap lan luot diem thi Toan, Ly, Hoa: ");
		scanf_s("%f %f %f", &toan, &ly, &hoa);
		printf("\aNhap lan luot he so mon Toan, Ly, Hoa: ");
		scanf_s("%d %d %d", &hst, &hsl, &hsh);
		float ave = (float)(hst * toan + hsl * ly + hsh * hoa) / (hst + hsl + hsh);
		printf("\n\aDiem trung binh cua sinh vien do la %.1f", ave);
	} break;
	//bai4
	case 4:
	{
		unsigned int cd, cr, s, p;
		printf("\aNhap lan luot chieu dai va chieu rong cua hinh chu nhat: ");
		scanf_s("%d %d", &cd, &cr);
		s = cd * cr;
		p = (cd + cr) * 2;
		float dc = (float)sqrt(pow(cd, 2) + pow(cr, 2));
		printf("\n\aHinh chu nhat co dien tich la %d, chu vi la %d va duong cheo la %.2f", s, p, dc);
	} break;
	//bai5
	case 5:
	{
		char kt;
		printf("nhap mot ky tu: ");
		rewind(stdin);
		scanf_s("%c", &kt);
		if (kt >= 'A' && kt <= 'Z')
			printf("\nla chu viet hoa");
		else
		{
			if (kt >= 'a' && kt <= 'z')
				printf("\nla chu viet thuong");
			else
				printf("\nla ky tu khac");
		}
	} break;

	//bai6
	case 6:
	{
		char kt;
		printf("Nhap vao mot ky tu:");
		rewind(stdin);
		scanf_s("%c", &kt);
		if (kt >= 'a' && kt <= 'z')
			printf("Ky tu do thuoc 26 chu cai Tieng Anh");
		else
			printf("Ky tu do khong thuoc 26 chu cai tieng Anh");
	} break;
	//bai7
	case 7:
	{
		int a, b;
		printf("\nHay nhap hai he so: ");
		scanf_s("%d %d", &a, &b);
		float x = (float)-(b / a);
		printf("\nNghiem cua phuong trinh ax+b=0 la %.2f", x);
	} break;
	//bai8
	case 8:
	{
		int a, b;
		printf("\aNhap 2 so nguyen bat ky: ");
		scanf_s("%d %d", &a, &b);
		int max = a > b ? a : b;
		int min = a < b ? a : b;
		printf("\n\a2 so vua nhap co gia tri lon nhat la %d va gia tri nho nhat la %d", max, min);
	} break;
	//bai9
	case 9:
	{
		int a, b, c;

		printf("\aMoi ban nhap 3 so bat ky: ");
		scanf_s("%d %d %d", &a, &b, &c);

		int max = a > b ? a : b;
		max = c > max ? c : max;
		int min = a < b ? a : b;
		min = c < min ? c : min;

		printf("\n\aTrong 3 so co gia tri lon nhat la %d va gia tri nho nhat la %d", max, min);
	} break;
	//bai10
	case 10:
	{
		int i(1), so(20), bt;
		printf("\aGia tri cua i la ");
		scanf_s("%d", &i);
		for (; i <= 5; i++)
			bt = so + ++i + i++;
		printf("\n\aBieu thuc 20 + ++i + i++ co ket qua la: %d; i = %d", bt, i);
	} break;
	case 0: exit(0); break;
	default: exit(0);
		break;
	}
}
void main()
{
	intro();
	while (true)
	{
		resolve_menu();
	}
	_getch();
}