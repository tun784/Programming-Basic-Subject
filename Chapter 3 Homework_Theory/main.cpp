//Chuong 3 ly thuyet
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
void intro()
{
	printf("________________________________________\n");
	printf("Danh sach cac bai duoi day bao gom:\n");
	for (int u = 1; u <= 35; u++)
		printf("| Bai %d\n", u);
	printf("Nhan so 0 de thoat chuong trinh\n");
	printf("\a_______________________________________");
}
int select_menu()
{
	int o;
	printf("\nBan muon thuc hien bai nao? ");
	scanf_s("%d", &o);

	if (o >= 0 && o <= 35)
		return o;
	else
		return select_menu();
}
void resolve_menu()
{
	int o = select_menu();
	switch (o)
	{
	case 1:
	{ int x;
	printf("\nMoi ban nhap mot so bat ky: ");
	scanf_s("%d", &x);

	if
		(x >= 0)
	{
		printf("\n%d la so duong", x);
	}
	else
	{
		printf("\n%d la so am", x);
	}
	} break;
	case 2:
	{ int a, b;
	printf("\nVui long nhap 2 so bat ky: ");
	scanf_s("%d %d", &a, &b);

	int x = a > b ? a : b;
	printf("\nSo lon nhat giua hai so vua nhap la %d", x);

	if (a > b)
	{
		printf("\nSo lon nhat giua hai so vua nhap la %d", a);
	}
	else
	{
		printf("\nSo lon nhat giua hai so vua nhap la %d", b);
	}
	} break;
	case 3:
	{
		int x;
		printf("\nMoi ban nhap mot so bat ky: ");
		scanf_s("%d", &x);

		if (x % 2 == 0)
		{
			printf("\n%d la so chan", x);
		}
		else
		{
			printf("\n%d la so le", x);
		}
	} break;
	case 4:
	{
		int a, b;
		printf("\nMoi nhap 2 so bat ky: ");
		scanf_s("%d %d", &a, &b);

		if (a = b)
			printf("\nSo %d bang so %d", a, b);
		else
		{
			if (a > b)
			{
				printf("\n%d lon hon %d", a, b);
			}
			else
			{
				printf("\n%d nho hon %d", a, b);
			}
		}
	} break;
	case 5:
	{
		int a, b;
		printf("\nMoi nhap 2 so bat ky: ");
		scanf_s("%d %d", &a, &b);

		if (a % b == 0)
		{
			printf("\n%d la boi so cua %d", a, b);
		}
		else
		{
			printf("\n%d khong la boi so cua %d", a, b);
		}
	} break;
	case 6:
	{
		int dl, sl;
		printf("\nMoi nhap don gia va so luong mat hang: ");
		scanf_s("%d %d", &dl, &sl);

		int tt = dl * sl;

		if (tt > 100)
			tt *= (1 - 0.03);

		printf("\nTien khach phai tra la %d", tt);
	} break;
	case 7:
	{
		float x, a, b;
		printf("\nHay nhap hai he so: ");
		scanf_s("%f %f", &a, &b);

		x = -(b / a);
		printf("\nNghiem cua phuong trinh ax+b=0 la %.2f", x);
	} break;
	case 8:
	{
		float x1, x2, a, b, c, denta;
		printf("\nHay nhap ba he so: ");
		scanf_s("%f %f %f", &a, &b, &c);

		denta = pow(b, 2) - 4 * a * c;
		if (denta < 0)
			printf("\nPhuong trinh vo nghiem");
		if (denta == 0)
		{
			x1 = (-b) / (2 * a);
			printf("\nPhuong trinh co 1 nghiem kep la %.2f", x1);
		}
		else
		{
			x1 = (-b + sqrt(denta)) / (2 * a);
			x2 = (-b - sqrt(denta)) / (2 * a);
			printf("\nPhuong trinh co 2 nghiem phan biet la %.2f va %.2f", x1, x2);
		}
	} break;
	case 9:
	{
		int thang;
		printf("\nMoi nhap mot thang bat ky: ");
		scanf_s("%d", &thang);

		switch (thang)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("\nThang %d co 31 ngay", thang); break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("\nThang %d co 30 ngay", thang); break;
		case 2:
			printf("\nThang %d co 28 hoac 29 ngay", thang); break;
		default:
			printf("\nKhong co thang %d", thang); break;
		}
	} break;
	case 10:
	{
		int nam;
		printf("\nNhap mot nam bat ky: ");
		scanf_s("%d", &nam);

		if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0))
		{
			printf("\nNam %d la nam nhuan", nam);
		}
		else
		{
			printf("\nNam %d khong la nam nhuan", nam);
		}
	} break;
	case 11:
	{
		int n;
		printf("Cau 1: Tinh chu vi, dien tich hinh chu nhat\nCau 2: Tinh chu vi, dien tich hinh vuong\nCau 3: Tinh chu vi, dien tich hinh tron\nMoi ban chon mot bai: ");
		scanf_s("%d", &n);

			switch (n)
			{
			case 1:
			{
				int a, b, p, s;
				printf("Moi nhap chieu dai va chieu rong: ");
				scanf_s("%d %d", &a, &b);
				p = (a + b) * 2;
				s = a * b;
				printf("Hinh chu nhat co chu vi la %d va dien tich la %d\n", p, s);
			} break;
			case 2:
			{
				int a, p, s;
				printf("Nhap chieu dai canh hinh vuong: ");
				scanf_s("%d", &a);
				p = a * 4;
				s = pow(a, 2);
				printf("Hinh vuong co chu vi la %d va dien tich la %d\n", p, s);
			} break;
			case 3:
			{
				const float pi = 3.1418;
				float r, p, s;
				printf("\nNhap ban kinh hinh tron: ");
				scanf_s("%f", &r);
				p = 2 * pi * r;
				s = pi * pow(r, 2);
				printf("\nHinh tron co chu vi la %.2f va ban kinh la %.2f", p, s);
			} break;
			default: printf("\nBan da nhap sai");
				break;
			}
	} break;
	case 12:
	{
		int a, b, x;
		printf("Nhap 2 so nguyen bat ky: ");
		scanf_s("%d %d", &a, &b);
		printf("1. Phep cong\n");
		printf("2. Phep tru\n");
		printf("3. Phep nhan\n");
		printf("4. Phep chia\n");
		printf("Hay lua chon mot phep toan bat ki: ");
		scanf_s("%d", &x);
		switch (x)
		{
		case 1:
		{
			int n = a + b;
			printf("\nTong cua a va b la %d", n);
		} break;
		case 2:
		{
			int n = a - b;
			printf("\nHieu cua a va b la %d", n);
		} break;
		case 3:
		{
			float n = (float)a * b;
			printf("\nTich cua a va b la %.0f", n);
		} break;
		case 4:
		{
			float n = (float)a / b;
			printf("\nThuong cua a va b la %.2f", n);
		} break;
		default: printf("\nBan da chon sai phep toan");
			break;
		}
	} break;
	case 13:
	{
		printf("\nDay so tu 1 toi 100 la: ");
		for (int i = 1; i <= 100; i++)
			printf("%d ", i);
	} break;
	case  14:
	{ int tong(0);
	for (int i = 1; i <= 20; i++)
		tong += i;

	printf("\nTong tu 1 toi 20 la: %d", tong);
	} break;
	case 15:
	{	unsigned int n;
	printf("\nNhap mot so nguyen bat ky: ");
	scanf_s("%d", &n);
	unsigned tich(1);
	for (int i = 1; i <= n; i++)
		tich *= i;

	printf("\nTich tu 1 toi %d la %d", n, tich);
	} break;
	case 16:
	{
		unsigned int n;
		printf("\nNhap mot so bat ky: ");
		scanf_s("%d", &n);
		unsigned int tong(0);
		for (int i = 1; i <= n; i++)
		{
			if (i % 2 == 0)
			{
				tong += i;
			}
		}
		printf("\nTong 2 + 4 + 6 + 8 + ... + %d la %d", n, tong);
	} break;
	case 17:
	{
		unsigned int n;
		printf("\nNhap mot so bat ky: ");
		scanf_s("%d", &n);

		unsigned int tong(0);
		for (int i = 1; i <= n; i++)
			tong += i * (i + 1);

		printf("\nTong 1*2 + 2*3 + 3*4 + 4*5 + ... +%d(%d+1) la %d", n, n, tong);
	} break;
	case 18:
	{
		unsigned int n;
		printf("\nNhap mot so bat ky: ");
		scanf_s("%d", &n);

		float tong(0);
		for (int i = 1; i <= n; i++)
		{
			tong += (float)1 / (i * (i + 1) * (i + 2));
		}
		printf("\nKet qua co tong la %.2f", tong);
	} break;
	case 19:
	{
		unsigned int n;
		printf("\nNhap mot so bat ky: ");
		scanf_s("%d", &n);

		int tong(0);
		for (int i = 1; i <= n; i++)
			tong += powf(i, 2);

		printf("\nKet qua co tong la %d", tong);
	}
	break;
	case 20:
	{
		unsigned int n;
		printf("\nNhap mot so bat ky: ");
		scanf_s("%d", &n);

		int tong(0);
		n += 1;
		for (int i = 1; i <= n; i++)
			tong += (n - i) * i;
		//	int tong(0)tam(0)
		//	for (int i = 1; i <= n; i++)
		//	{	
		//		tam += i;
		//		tong+= tam;
		//	}
		printf("\nKet qua co tong la %d", tong);
	} break;
	case 21:
	{
		int c;
		printf("Bang cuu chuong tu 1 toi 9 la\n");
		for (int i = 1; i <= 9; i++)
		{
			for (int j = 1; j <= 9; j++)
			{
				c = i * j;
				printf("%d x %d= %d  ", j, i, c);
			}
			printf("\n");
		}
	}
	case 22:
	{
		int c(1), n;
		printf("Moi ban nhap so nguyen bat ky: ");
		scanf_s("%d", &n);
		for (int i = 1; i <= 10; i++)
		{
			c = i * n;
			printf("\n%d x %d = %d", n, i, c);
		}
	} break;
	case 23:
	{
		int d, r;
		printf("Moi ban nhap lan luot chieu dai, chieu rong hinh chu nhat: ");
		scanf_s("%d%d", &d, &r);

		for (int i = 1; i <= r; i++)
		{
			for (int j = 1; j <= d; j++)
			{
				printf("*\t");
			}
			printf("\n");
		}
	case 24:
	{
		int i(1), n;
		printf("Moi ban nhap so nguyen bat ky: ");
		scanf_s("%d", &n);

		for (; i <= n; i++)
		{
			if (i % 2 != 0)
			{
				printf("%d\t", i);
			}
		}
	} break;
	case 25:
		int n, sum(0);
		printf("\nNhap mot so bat ky: ");
		scanf_s("%d", &n);

		for (int i = 1; i < n; i++)
			if (i % 2 == 0)
				sum += i;
		printf("\nTong cac so chan nho hon %d la %d", n, sum);
	} break;
	case 26:
	{
		int n;
		printf("\nMoi nhap mot so nguyen bat ky: ");
		scanf_s("%d", &n);
		for (int i = 1; i < n; i++)
			if (i % 5 == 0)
				printf("%d\n", i);
	} break;
	case 27:
	{
		int a, b, x, y;
		printf("Moi nhap hai so nguyen bat ky: ");
		scanf_s("%d%d", &a, &b);
		x = a;
		y = b;
		while (x != y)
		{
			if (x > y)
				x = x - y;
			else
				y = y - x;
		}
		int c = (a * b) / x;

		printf("UCLN(%d,%d)= %d\nBCNN(%d,%d)= %d", a, b, x, a, b, c);
	} break;
	case 34:
	{

	} break;
	case 35:
	{
		float a, b, c;
		printf("Nhap vao ba canh cua mot tam giac: ");
		scanf_s("%f%f%f", &a, &b, &c);

		float a2 = pow(a, 2), b2 = pow(b, 2), c2 = pow(c, 2);
		float suma = b + c, sumb = a + c, sumc = b + c;
		float hieua = fabs(b - c), hieub = fabs(a - c), hieuc = fabs(a - b);

		if ((a > hieua && a < suma) ||
			(b > hieub && b < sumb) ||
			(c > hieuc && c < sumc))
			printf("Tam giac khong ton tai");
		else
		{
			if (
				((a == b && c2 == a2 + b2) || (b == c && a2 == b2 + c2) || (a == c && b2 == a2 + c2))
				)
				printf("Tam giac vuong can");
			else if (
				(a2 == b2 + c2) ||
				(b2 == a2 + c2) ||
				(c2 == a2 + b2)
				)
				printf("Tam giac vuong");
			else if (a == b && b == c && a == c)
				printf("Tam giac deu");
			else if (a == b || b == c || a == c)
				printf("Tam giac can");
			else
				printf("Tam giac thuong");
		}
	} break;
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