bai5onha()
{
	unsigned int n,sum;
	printf("Moi nhap mot so n>=1 bat ky: ");
	scanf_s("%u",&n);

	for (int i = 1; i <= n; i++)
		sum+=1/(2*i+1);
	printf("S(%u)= %u",n,sum);
}