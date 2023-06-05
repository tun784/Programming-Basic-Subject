bai2trenlop()
{
	unsigned int n,dem;
	printf("Moi nhap so nguyen duong bat ky: ");
	scanf_s("%u",&n);

	for (int i = 1; i < n; i++)
		if (i%3==0)
			dem+=i;
	printf("So nguyen duong nho hon %u chia het cho 3 la %u",n,dem);
}
