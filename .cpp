#include<stdio.h>
void luythua (int a,int b)
{
	int x= luythua(a,b/2);
	printf("%d",&x);
}
main () {
	printf("nhap a va b: ");
	int a,b;
	scanf("%d%d",&a,&b);	
	luythua(a,b);
}