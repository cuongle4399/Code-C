#include<stdio.h>
void nhap(float a[],int &n) {
	printf("nhap so sinh vien: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		printf("nhap diem cua sinh vien thu %d: ",i);
		scanf("%f",&a[i]);
	}
}
int diemtren5 (float a[], int n) {
	int k=0;
	for(int i=1;i<=n;i++) {
		if (a[i]>=5) {
			k++;
		}
	}
	return k;
}
int sodiemnho(float a[], int n) {
	int t=0;
	float min=a[1];
	for(int i=2;i<=n;i++) {
		if (a[i]<min) {
			min=a[i];
		}
	}
	for(int i=1;i<=n;i++) {
		if (a[i]==min) {
			t++;
		}
	}
	return t;
}
void ghidiem (float a[], int n) {
	FILE *f;
	f=fopen("diemthi.txt", "w");
	for(int i=1;i<=n;i++) {
		fprintf(f,"%.2f\n",a[i]);
	}
	fclose (f);
}
void diemtrungbinh(float a[], int n) {
	float s=0;
	FILE *f;
	f=fopen("diemthi.txt","r");
	for(int i=1;i<=n;i++) {
		fscanf(f,"%.2f\n",&a[i]);
		s+=a[i];
	}
	s=s/n;
	printf("diem trung binh cua sinh vien ghi trong tep: %.2f",s);
	fclose(f);
}
main () {
	float a[100]; int n;
	nhap(a,n);
	printf("co %d sinh vien co diem lon hon hoac bang diem 5 \n",diemtren5(a,n));
	printf("co %d sinh co diem nho nhat trong mang \n",sodiemnho(a,n));
	ghidiem(a,n);
	diemtrungbinh(a,n);
}