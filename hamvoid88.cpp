#include<stdio.h>
void nhapmang(int a[],int *n) {
	int i;
	printf("nhap so phan tu mang : ");
	scanf("%d",n);
	for(i=0;i<*n;i++) {
		printf("nhap gia tri cua phan tu a[%d]",&i);
		scanf("%d",&a[i]);
	}
}
int max(int a[],int n) {
	int b=a[0];
	for(int i=0;i<n;i++) {
	if (a[i]>b) {
			b=a[i];
		}
	}
	return b;
}
int main () {
	int a[30]; int n,b;
	nhapmang(a,&n);
	b= max(a,n);
}