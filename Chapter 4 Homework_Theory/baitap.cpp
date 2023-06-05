#include <stdio.h>
#include <conio.h>
#include <math.h>
 
//1. kiem tra chan le
int ktchanle(int n)
{
	if (n%2==0)
		return 0;
	else
		return 1;

} 	


//2. so nguyen to
int snt(int n)
{
	int kt = 1;
	if (n<2)
		kt = 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i==0)
			kt = 0;
	}
	return kt;
}


//3. so chinh phuong
int ktscp(int n)
{
	if ((float)	sqrt(n) == sqrt(n))
		return 0;
		return 1;
}


void main()
 {
//bai 1
	int n;		
		printf("1. kiem tra chan le\n");
		printf("Nhap vao n: ");
			scanf_s("%d", &n);

	if (ktchanle(n) == 0)
		printf("%d la so chan\n",n);
	else
		printf("%d la so le\n",n);
	_getch();
//bai 2

	int x, kt;
	printf("2. so nguyen to\n");

		printf("Nhap x: "); scanf_s("%d", &x);
			
		kt = snt(x);
	
		if (kt == 1)
		printf("%d la so nguyen to \n", x);
		else
		printf("%d khong la so nguyen to \n", x);
	_getch();
//bai 3
	int u;
	printf("3. so chinh phuong\n");

	printf("Nhap x: "); scanf_s("%d", &u);
	if (ktscp(u) == 0)
		printf("%d la so chinh phuong\n", u);
	else
		printf("%d khong la so chinh phuong\n", u);
}
