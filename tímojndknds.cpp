#include<stdio.h>
int timsochan (int a[], int n) {
	int b;
	for (int i=0;i<n;i++) {
		if (a[i]%2==0) {
			b= a[i];
		break;
	} }
	return b;
	}
main () {
	int a[100];int n;
	printf("nhap so phan tu mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		printf("nhap gia tri cua mang a[%d]",i);
		scanf("%d",&a[i]);
	}
	int b=timsochan(a,n);
	printf("tim so chan dau tien: %d",b);
}