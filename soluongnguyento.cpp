#include<stdio.h>
#include<math.h>
void nhap (int a[], int &n) {
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		printf("gia tri cua a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
int solonhonx(int a[], int n, int x) {
	int dem=0;
	for(int i=1;i<=n;i++) {
		if (a[i]>x) {
			dem++;
		}
	}
	return dem;
}
int ktra(int x) {
	if (x<2) {
		return 0;
	}
	for(int i=2;i<=sqrt(x);i++)
    if (x%i==0) {
    	return 0;
	}
	else 
	   return 1;
	return 1;
}
main () {
	int n,a[100],x;
	nhap(a,n);
	printf("nhap x: ");
	scanf("%d",&x);
	int b=solonhonx(a,n,x);
	if (ktra(b) ==1) {
		printf("%d la so nguyen to ",solonhonx(a,n,x));
	}
	else {
		printf("%d khong phai la so nguyen to",solonhonx(a,n,x));
	}
}