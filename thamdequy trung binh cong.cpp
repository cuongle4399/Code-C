#include<stdio.h>
int trungbinhcongsochan( int n, int a[]) {
	int b=0;
	for (int i=0;i<n;i++) {
		if(a[i]%2==0) {
			b=a[i]+b;
		}
	}
	return b;
}
main () {
	int a[100], n;
	printf("nhap so phan tu mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		printf("nhap gia tri cua a[%d]",i);
		scanf("%d",&a[i]);
	}
	int b=trungbinhcongsochan(n,a);
	printf("trung binh cong so chan cua cac so trong mang la: %d",b);
}