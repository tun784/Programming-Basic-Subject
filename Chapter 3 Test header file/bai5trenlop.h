bai5trenlop()
{
	int a,b,c;
	for (int i = 100; i <= 999; i++)
	{
		a= i/100;
		b= (i%100)/10;
		c= i%10;
		if ((a+b+c)%2==0)
			printf("%d ",i);
	}
}
