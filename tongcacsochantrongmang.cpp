#include<stdio.h>
int tongcacsochan(int a[],int n) {
	int s=0,i;
	for(i=0;i<n;i++) {
		if (a[i]%2==0) {
			s=s+a[i];
		}
	}
	return s;
}
main () {
	int n,i;
	int a[100];
	printf("nhap so phan tu mang: ");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		printf("nhap gia tri nguyen cua mang a[%d]",i);
		scanf("%d",&a[i]);
	}
	int b=tongcacsochan(a,n);
	printf("tong cac so chan trong mang: %d",b);
	return 0;
}