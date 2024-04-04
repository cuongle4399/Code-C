#include<stdio.h>
#include<math.h>
void nhap(int a[], int n) {
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		printf("nhap phan tu thu %d: ",i);
		scanf("%d",&a[i]);
		}
}
/*int kiemtra(int x) {
	int b;
		if(x%2==0) {
			b=1;
		}
		else
		b=0;    
	return b;
}
int kiemtrasobe(int a[], int n) {
	int min=a[0];
	for(int i=1;i<n;i++) {
		if (a[i] <min ) {
			min =a[i];
		}
	}
	return min;
}*/
int kiemtrasonguyento (int m) {
	if (m<2) {
		return 0;
	}
	else {
	for (int i=2; i<=sqrt(m);i++) {
		if (m%i==0) {
			return 0;
		}
		else 
		return 1;
	}
	return 1;
}
}
main () {
	int n;
	int a[100];
	nhap(a,n);
	/*for(int i=0;i<n;i++) {
	if (kiemtra(a[i])==1) {
		printf("%d: chan\n ",a[i]);
	}
	if (kiemtra(a[i])==0) {
	    printf("%d: le \n",a[i]);
		}
}*/
    for(int i=0;i<n;i++) {
    	if(kiemtrasonguyento(a[i])==1) {
    		printf("%d: la so nguyen to ",a[i]);
		}
		else 
		   printf("%d: khong phai la so nguyen to ",a[i]);
	}
    //printf("so be nhat trong mang: %d",kiemtrasobe(a,n));
}