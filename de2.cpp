#include<stdio.h>
void nhap (float a[],int &n) {
	printf("nhap so mon hoc cua sinh vien: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		printf("nhap diem cua mon hoc thu %d: \n",i);
		scanf("%f",&a[i]);
	}
}
void mondiemB (float a[], int n) {
	for(int i=0;i<n;i++) {
		if (a[i]>=6 && a[i]<=6.9) {
			printf("%f la mon duoc diem B: \n",a[i]);
		}
		else 
		printf("ban khong co mon nao diem B: \n");
	}
}
int xethocbong (float a[], float n) {
	int x=0;
	for(int i=0; i<n; i++) {
		if (a[i] <7) {
			x++;
		}
	}
	return x;
	
}
void ghidiem(float a[], int &n) {
	FILE *f;
	f=fopen("diem.txt", "w");
	printf("nhap so mon hoc: ");
	scanf("%d",&n);
	fprintf(f,"so mon hoc %d \n",n);
	for(int i=0; i<n;i++) {
		printf("nhap mon hoc thu %d: ",i);
		scanf("%f",&a[i]);
		fprintf(f,"%0.2f ",a[i]);
	}
	fclose(f);
}
float docteptinhdiem (float a[], int n) {
	FILE *f;
	float s=0;
	f=fopen("diem.txt","r");
	fscanf(f,"%d",&n);
	for(int i=0; i<n;i++) {
		fscanf(f,"%f ",a[i]);
		s=s+a[i];
	}
	s=s/n;
	fclose(f);
	return s;
}
main () {
	float a[100]; int n;
	nhap(a,n);
	mondiemB(a,n);
	if (xethocbong(a,n)==n) {
		printf("ban duoc xet hoc bong: \n");
	}
	else {
		printf("khong duoc xet hoc bong:\n ");
	}
	ghidiem(a,n);
	printf("diem trung binh cua cac mon hoc: %f",docteptinhdiem(a,n));
}
