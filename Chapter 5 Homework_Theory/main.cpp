#include <stdio.h>
#include <conio.h>

void mang2chieu()
{
	int a[][5]={{3,11,6,82,8},
				{7,3585,4,45,48},
				{8,2,653,12,435} };
	int x = (sizeof(a) / sizeof(a[0]));
	int y = (sizeof(a[0]) / sizeof(a[0][0]));
	int z = sizeof(a);
	int t = sizeof(a[0]);
	int u = sizeof(a[0][0]);
	printf("%d\n%d\n%d\n%d\n%d\n", x, y, z, t, u);
	for (int i = 0; i < (sizeof(a) / sizeof(a[0])); i++)
	{
		for (int j = 0; j < (sizeof(a[0]) / sizeof(a[0][0])); j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}
void mang1chieu() {
	int a[7] = {3,11,6,82,8,4,2};
	int x = (sizeof(a) / sizeof(a[0]));
	int y = sizeof(a);
	int z = sizeof(a[0]);
	printf("%d\n%d\n%d\n", x, y, z);
}
void main()
{
	mang1chieu();
}
