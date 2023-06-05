int bai3trenlop()
{
	int a,b,c,y;
	printf("1. S = 1*2*3*4*5* ... *n\n");
	printf("2. S = 2 + 4 + ... + 20\n");
	printf("3. S = 1*2 + 2*3 + 3*4 + ... + n*(n+1)\n");
	printf("4. S = 1/1*2*3 + 1/2*3*4 + ... + 1/(n*(n+1)*(n+2))\n");
	printf("Ban muon lam bieu thuc nao ? ");
	scanf_s("%d",&y);
	switch (y)
	{
	case 1:
		{
			int n,sum;
			for (int i = 1; i <= n; i++)
				sum+=i;
			printf("S = %d\n",sum);
		} break;
	case 2:
		{ int sum;
			for (int i = 1; i <= 20; i++)
				if (i%2==0)
					sum+=i;
			printf("S = %d\n",sum);
		} break;
	case 3:
		{
			int sum,n;
			printf("Moi nhap so nguyen bat ky: ");
			scanf_s("%d",&n);

			for (int i = 1; i <= n; i++)
				sum+=i*(i+1);
			printf("S = %d\n",sum);
		} break;
	case 4:
		{
			int sum,n;
			printf("Moi nhap so nguyen bat ky: ");
			scanf_s("%d",&n);

			for (int i = 1; i <= n; i++)
				sum+=1/(i*(i+1)*(i+2));
			printf("S = %d\n",sum);
		}break;
	default: return bai3trenlop();
		break;
	}
}
