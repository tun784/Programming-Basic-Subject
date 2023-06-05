bai1trenlop()
{
	unsigned int n,sum;
	printf("Moi ban nhap so nguyen duong bat ky: ");
	scanf_s("%u",&n);

	for (int i = 1; i < n; i++)
		if (i%2==0)
			sum+=i;
	printf("Tong cac so chan nho hon %u la %u",n,sum);
}
