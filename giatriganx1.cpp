#include<stdio.h>
#include<math.h>
void nhap(float a[], int &n) {
	printf("nhap so phan tu mang: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		printf("gia tri cua phan tu thu %d: ",i);
		scanf("%f",&a[i]);
	}
}
void in (float a[], int n) {
	for(int i=1;i<=n;i++) {
		printf("gia tri cua phan tu thu %d: %f \n",i,a[i]);
	}
}
int trungbinhcong (float a[], int n) {
	int s=0,t=0;
	for(int i=1;i<=n;i++) {
		int b=a[i];
		if (b==a[i]) {
			s+=a[i];
			t++;
		}
	}
	return s/t;
}
int ganx(float a[], int n, int x) {
	float gan=fabs(a[1]-x);
	float y;
	float min =fabs(a[1]-x);
	for(int i=1;i<=n;i++) {
		if (fabs((a[i]-x))<=min) {
			min =fabs(a[i]-x);
			y=a[i];
		}
	}
	return y;
}
void inkq(float a[], int n,int x) {
	for(int i=1;i<=n;i++) {
		if (a[i]==ganx(a,n,x)) {
			printf("so %f la so gan voi %f nhat tai vi tri %d",a[i],x,i);
		}
	}
}
main () {
	float a[100]; int n;float x;
	nhap(a,n);
	in (a,n);
	printf("diem trung binh cong cua so nguyen la: %d ",trungbinhcong(a,n));
	printf("nhap x: ");
	scanf("%f",&x);
	ganx(a,n,x);
	inkq(a,n,x);
}