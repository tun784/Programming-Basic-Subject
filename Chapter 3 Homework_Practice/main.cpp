#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
void introduction()
{
	printf("Duoi day la danh sach cac bai tap ve nha Chuong 3\n Bai tap tren lop:\n");
	for (int i = 0; i <= 11; i++)
		printf("Bai %d\n", i);
}
int option()
{
	int o;
	printf("Ban muon lam bai nao tu 1 toi 11? ");
	scanf_s("%d", &o);
	if (o >= 1 && o <= 2)
		return o;
	else return option();
}

void bai1()
{
    long int a;
    int i;
    printf("a= \n");
    scanf_s("%ld", &a);
    //xac dinh so ki tu
    if (a / 10 != 0)
    {
        int D;
        D = a;
        for (i = 0; D > 0; i++)
            D /= 10;
        printf("%ld co %d chu so \n", a, i);

        //xac dinh gia tri tung vi tri, gia tri max va tinh tong
        if (i > 0)
        {
            int V, M, n, j, max;
            double sum;
            max = 0;
            sum = 0;
            for (n = i, j = 1; n > 0; j++, n--)
            {
                M = pow(10, n);
                V = (a % M - a % (M / 10)) / (M / 10);
                printf("\n ki tu %d lC  %d", j, V);
                sum += V;
                if (V > max)
                    max = V;
            }
            printf("\n tong cac chu so= %lf", sum);
            printf("\n max= %d", max);
            //xem xet doi mot khac nhau
            int old, C;
            C = pow(10, i);
            for (n = i; n > 0; n--)
            {
                M = pow(10, n);
                V = (a % M - a % (M / 10)) / (M / 10);
                if (V == (a % C - a % (C / 10)) / (C / 10))
                {
                    printf("\n bat dau xet");
                    old = V;
                }
                else if (V != old)
                    old = V;
                else
                {
                    printf("\n binh thuong");
                    exit(0);
                }
            }
            if (old / 10 == 0)
                printf("\n doi mot khac nhau");
        }
    }
    else
        printf("%ld co 1 chu so", a);
}
void bai3()
{
    unsigned int n, sum(0);
    printf("Moi nhap mot so n>=1 bat ky: ");
    scanf_s("%u", &n);

    for (int i = 1; i <= n; i++)
        sum += pow((-1),i-1);
    printf("S(%u)= %u", n, sum);
}
void bai4()
{
    unsigned int n, sum(0);
    printf("Moi nhap mot so n>=1 bat ky: ");
    scanf_s("%u", &n);

    for (int i = 1; i <= n; i++)
        sum += 1 / i;
    printf("S(%u)= %u", n, sum);
}
void bai5()
{
    unsigned int n, sum(0);
    printf("Moi nhap mot so n>=1 bat ky: ");
    scanf_s("%u", &n);

    for (int i = 1; i <= n; i++)
        sum += 1 / (2 * i + 1);
    printf("S(%u)= %u", n, sum);
}
void bai6()
{
    unsigned int n, sum(0);
    printf("Moi nhap mot so n>=1 bat ky: ");
    scanf_s("%u", &n);

    for (int i = 1; i <= n; i++)
        sum += 1 / (i * (i + 1));
    printf("S(%u)= %u", n, sum);
}
void bai7()
{
    unsigned int n, sum(0);
    printf("Moi nhap mot so n>=1 bat ky: ");
    scanf_s("%u", &n);

    for (int i = 1; i <= n; i++)
        sum += i / (i+1);
    printf("S(%u)= %u", n, sum);
}
void bai8()
{
    unsigned int n, sum(0);
    printf("Moi nhap mot so n>=1 bat ky: ");
    scanf_s("%u", &n);

    for (int i = 1; i <= n; i++)
        sum += (2*i+1) / (2*i+2);
    printf("S(%u)= %u", n, sum);
}
void bai9()
{
    int n, x, kq;
    printf("Moi nhap lan luot bien x va so nguyen bat ky: ");
    scanf_s("%d%d", &x, &n);

        kq = pow(x,n);

    printf("Tong S(%d,%d)= %d", x, n, kq);
}
void bai10()
{
    int n, x, sum(0);
    printf("Moi nhap lan luot bien x va so nguyen bat ky: ");
    scanf_s("%d%d", &x, &n);

    for (int i = 1; i <= n; i++)
        sum += pow(x,i);

    printf("Tong S(%d,%d)= %d", x, n, sum);
}
void bai11()
{
    int n, x, sum(0);
    printf("Moi nhap lan luot bien x va so nguyen bat ky: ");
    scanf_s("%d%d", &x, &n);

    for (int i = 1; i <= n; i++)
        sum += pow(-1, i) * pow(x, i);

    printf("Tong S(%d,%d)= %d", x, n, sum);
}
void resolve()
{
	int u = option();
    switch (u)
    {
    case 1: bai1(); break;
    case 2: bai2(); break;
    case 3: bai3(); break;
    case 4: bai4(); break;
    case 5: bai5(); break;
    case 6: bai6(); break;
    case 7: bai7(); break;
    case 8: bai8(); break;
    case 9:	bai9(); break;
    case 10: bai10(); break;
    case 11: bai11(); break;
    default: printf("Sai bai\n"); break;
    }
}
void main()
{
		introduction();
        while (true)
            resolve();
		_getch();
}