#include <stdio.h>
void nhap (int a[], int &n) {
	printf("ban muon nhap bao nhieu so : ");
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		printf("nhap phan tu thu %d ",i);
		scanf("%d",&a[i]);
	}
}
void maxbehonx (int a[],int n,int x) {
	int max=0;int s=0;
	printf("nhap phan tu x: ");
	scanf("%d",&x);
	for (int i=0;i<n;i++) {
		if (a[i]>max && a[i]<x) {
			max=a[i];
			s=i+1;
		}
	}
	printf("max be hon %d tai vi tri %d",max,s);
}
main () {
	int n,x; int a[100];
	nhap (a,n);
	maxbehonx(a,n,x);
}