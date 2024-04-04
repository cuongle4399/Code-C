#include<stdio.h>
main ()
{
	int n,t;
	printf("nhap so ngay cong :\n ");
	scanf("%d",&n);
	printf("nhap so tien cong 1 ngay : \n ");
	scanf("%d",&t);
	if(n<=25)
	{
		int luong=n*t;
		printf("tien luong tren 25 ngay: %d ");
	}
	else {
		int luong= 25*t+(n-25)*2*t;
		printf ("so tien luong duoi 25 ngay: %d");
	}
	
}