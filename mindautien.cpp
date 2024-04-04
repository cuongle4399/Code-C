#include<stdio.h>
void nhap(int a[], int &n){
	printf("nhap so lop: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		printf("nhap so hoc sinh cua lop thu %d:",i);
		scanf("%d",&a[i]);
	}
}
int dem(int a[], int n,int x) {
	int s=0;
	for(int i=1;i<=n;i++) {
		if(a[i]>x) {
			s++;
		}
	}
	return s;
}
int mindautien(int a[], int n) {
	int min=a[1],k=1;
	for(int i=2;i<=n;i++) {
		if (a[i]<min) {
			min=a[i];
			k=i;
		}
	}
	return k;
}	
main () {
	int a[100],n,x;
	nhap(a,n);
	printf("nhap so nguyen x:");
	scanf("%d",&x);
	printf("so lop co hoc sinh lon hon x la : %d\n",dem(a,n,x));
	printf("min dau tien la: %d",mindautien(a,n));
}