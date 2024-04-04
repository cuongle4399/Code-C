#include <stdio.h>
main ()
{
	int a;
	printf("nhap so nguyen can tim boi so cua no tu 1 toi 15 : \n");
	scanf("%d",&a);
	for(int i=0;i<15;i++)
	{
		int b=a*i;
		printf("boi so cua so ban vua nhap tu 1 den 15 la :%d \n",b);
	}
}