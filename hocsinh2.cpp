#include<stdio.h>
void nhap(int a[], int &n){
	printf("nhap so lop: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		printf("nhap a[%d]:",i);
		scanf("%d",&a[i]);
	}
}
int dem(int a[], int n,int x) {
	int t=0;
	for(int i=1;i<=n;i++) {
		if(a[i]<x) {
			t++;
		}
	}
	return t;
}
int trumcuoi(int a[], int n) {
	int max=a[1];int k;
		for(int i=1;i<=n;i++) {
		if(a[i]>=max) {
			max=a[i];
			k=i;
		}
	}
	return k;
}
void ghitep(int a[], int n){
	FILE*f;
	f=fopen("sohocsinh.txt","w");
	for(int i=1;i<=n;i++){
		fprintf(f,"%d ",a[i]);
	}
	fclose(f);
}
int doctep(int a[], int n){
	FILE *f;
	f=fopen("sohocsinh.txt","r");
	for(int i=1;i<=n;i++){
		fscanf(f,"%d ",&a[i]);
		if(a[i]>45){
		printf("%d ",a[i]);
	}
	fclose(f);
}
}
main () {
	int x,n;int a[100];
	nhap(a,n);
	printf("nhap so nguyen x: ");
	scanf("%d",&x);
	printf("so hoc sinh be hon x la: %d\n",dem(a,n,x));
	printf("lop co nhieu hoc sinh cuoi lop la: %d",trumcuoi(a,n));
	ghitep(a,n);
	doctep(a,n);
}