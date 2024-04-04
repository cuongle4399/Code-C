#include<stdio.h>
#include<math.h>
void nhap(float a[],float &x,int &n){
	printf("Nhap n:");
	scanf("%d",&n);
	printf("Nhap %d phan tu trong mang\n",n);
	for(int i=1;i<=n;i++){
		printf("Phan tu thu %d trong mang:",i);
		scanf("%f",&a[i]);
	}
	printf("Nhap x:");
	scanf("%f",&x);
}
float tbc(float a[],int n){
	float s=0;
	for(int i=1;i<=n;i++){
		s+=a[i];
	}
	return s/n;
}
float tong(float a[],int n){
	float tong=0;
	for(int i=1;i<=n;i++){
		tong +=a[i];
	}
	return tong;
}
float tinh1(float a[],float x,int n){
	float min=fabs(a[1]-x);
	for(int i=2;i<=n;i++){
		if(fabs(a[i]-x)<=min) min=fabs(a[i]-x);
	}	
	return min;
}
void ktra(float a[],float x,int n){
	float min=tinh1(a,x,n);
	for(int i=1;i<=n;i++){
		if(min==fabs(a[i]-x)) printf("So gan voi %.1f nhat la:%.1f o vi tri thu %d\n",x,a[i],i);
	}
}
main(){
	int n;
	float x;
	float a[100];
	nhap(a,x,n);
	tinh1(a,x,n);
	printf("Trung binh cong cac so trong mang:%.2f\n",tbc(a,n));
	printf("Tong %d so co trong mang la:%.2f\n",n,tong(a,n));
	ktra(a,x,n);
}