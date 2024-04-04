#include<stdio.h>
#include<stdlib.h>
void nhap (float a[], int &n) {
	printf("nhap so phan tu cua mang:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		printf("nhap phan tu thu %d: ",i);
		scanf("%f",&a[i]);
	}
}
float tbcong (float a[], int n) {
	float s=0;int k=0;
	for(int i=1;i<=n;i++) {
		if (a[i]<-3) {
			s=s+a[i];
			k++;
		}
	}
	return s/k;
}
void soammax(float a[], int n) {
	float max=a[1];
	for(int i=1;i<=n;i++) {
		if (a[i]<0 && a[i]>max && i%2!=0) {
			max=a[i];
		}
}
		printf("so am lon nhat tai vi tri le la:\n");
		for(int i=1;i<=n;i++) {
			if (a[i]==max && i%2!=0) {
				printf ("%d ",i);
			}
		}
}
void ghitep(float a[], int n) {
	FILE *f;
	f=fopen("sothuc.txt","w");
	if (f=NULL) {
		printf("loi");
		exit(0);
	}
	fprintf(f,"%d\n",n);
	for(int i=1;i<=n;i++) {
		fprintf(f,"%f ",a[i]);
	}
	fclose(f);
}
void doctep(float a[], int n){
	FILE *f;
	float s=0;
	f=fopen("sothuc.txt","r");
	fscanf(f,"%d\n",&n);
	for(int i=1;i<=n;i++) {
		fscanf(f,"%f ",&a[i]);
		s+=a[i];
	}
	printf("tong cac so thuc trong tep la: %f",s);
	fclose(f);
}
main () {
	float a[100]; int n;
	nhap(a,n);
	printf("trung binh cong cac so duoi 3 diem la:%0.2f\n",tbcong(a,n));
	soammax(a,n);
	ghitep(a,n);
	doctep(a,n);
}
