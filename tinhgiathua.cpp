#include<stdio.h>
main ()
{
	int a=1;int n,b;
	printf("nhap so can tinh gia thua: ");
	scanf("%d",&n);
	if(n==0) {
		printf("loi");
	}
	else if(n!=0) {
		for(int i=1;i<=n;i++ ) {
		a=a*i;
		}
		printf("gia thua cua n la: %d ",a);
	}
}