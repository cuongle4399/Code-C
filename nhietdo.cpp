#include<stdio.h>
void nhap(float a[], int &n) {
	printf("nhap nhiet do trung binh n ngay cua nam: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		printf("nhiet do trung binh ngay thu %d: ",i);
		scanf("%f",&a[i]);
	}
}
int ngaynhietdocaonhat(float a[], int n) {
	int max=a[1];int s=1;
	for(int i=2;i<=n;i++) {
		if(a[i]>max) {
			max=a[i];
			s=i;
		}
	}
	return s;
}
int ngaysaucaohonngaytruoc (float a[], int n,int k) {
	int b,c=0,l=0;
	for(int i=1;i<=(n-k);i++){
		b=k+i-1;// ngày trước
		l=k+i;// ngày sau
		if (a[l]<=a[n] && a[b]<a[n]) {
			if (a[l]>a[b]) {
				c++;
			}
		}
	}
	return c;
}
void ghinhietdo (float a[], int n) {
	FILE *f;
	f=fopen("nhietdo.txt","w");
	fprintf(f,"%d \n",n);
	for(int i=1;i<=n;i++) {
		fprintf(f,"%0.2f ",a[i]);
	}
	fclose(f);
}
main () {
	float a[100];int n,k;
	nhap(a,n);
	ghinhietdo(a,n);
	printf("thu ngay co nhieu do cao nhat la: %d \n",ngaynhietdocaonhat(a,n));
	printf("nhap ngay thu k: ");
	scanf("%d",&k);
	printf("nhiet do ngay sau cao hon ngay truoc la: %d",ngaysaucaohonngaytruoc(a,n,k));
}