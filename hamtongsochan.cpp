#include <stdio.h>
#include <math.h>
void nhap (int a[], int &n ){
	printf("ban muon nhap bao nhiu so");
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
	   printf("nhap mot so nguyen thu %d: ",i);
	   scanf("%d",&a[i]);
	   }
}
int tongcacso (int a[], int n) {
	int s=0;
	for (int i=0;i<n;i++) {
		s=s+a[i];
	}
	return s;
}
int sochan (int a[],int n) {
	int b=0;
	for (int i=0;i<n;i++){
		if (a[i]%2==0) {
		b=b+a[i];
	}
	return b;
	}
}
/*/void nguyento (int a[],int n) {
	for(int i=1;i<=n;i++) {
		if (a[i]<2|| a[i]%2==0) {
			printf("%d khong phai so nguyen to",a[i]);
		}
		else if (a[i]%3==0 && sqrt(a[i])*sqrt(a[i])==a[i]) )
	}
}/*/
main () {
	int a[100]; int n;
	nhap(a,n);
	printf("tong cac so vua nhap: %d",tongcacso(a,n));
	printf("tong cac so chan : %d",sochan(a,n));
	return 0;
}