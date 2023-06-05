bai4onha()
{
	unsigned int n,sum;
	printf("Moi nhap mot so n>=1 bat ky: ");
	scanf_s("%u",&n);

	for (int i = 1; i <= n; i++)
		sum+=1/i;
	printf("S(%u)= %u",n,sum);
}
