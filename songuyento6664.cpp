#include<stdio.h>
#include<math.h>
void nhap (int a[], int &n) {
	printf("so luong mat hang ban : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		printf("nhap khoi luong mat hang thu %d: ",i);
		scanf("%d",&a[i]);
	}
}
bool kt(int x) {
		if (x<2) {
			return false;
		}
		else{
			for (int i=2;i<=sqrt(x);i++) {
				if (x % i==0) {
					return false;
				}
			}
		}
       return true;
	}
main () {
	int a[100];
	int n;
	nhap(a,n);
	printf("cac so nguyen to la: ");
	for(int i=1;i<=n;i++) {
	if (kt(a[i])==true) {
		printf("%d ",a[i]);
	}
}
}