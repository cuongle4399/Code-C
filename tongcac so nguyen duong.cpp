#include<stdio.h>
int tongcacso(int n)
{
	int s=0;
	if(n<=0) {
		printf("loi");
	}
	else if(n>0) {
		for (int i=1;i<=n;i++) {
			int s=i+s;
		}
		return s;
	}
}
main () {
	printf("tong cac so toi n la: %d",tongcacso(3));
}