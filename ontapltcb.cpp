#include<stdio.h>
void nhap (float a[], int &n) {
	printf("so luong mat hang ban : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		printf("nhap khoi luong mat hang thu %d: ",i);
		scanf("%f",&a[i]);
	}
}
void phicaonhat (float a[], int n) {
	float phi[100];
	for(int i=1;i<=n;i++) {
		if ((a[i]*2000)>1000) {
			phi[i]=((a[i]*2000)-((a[i]*2000)*0.15));
		}
		else 
		phi[i]=a[i]*2000;
	}
	float phimax=phi[1];
	for(int i=2;i<=n;i++) {
		if (phi[i]>phimax) {
			phimax=phi[i];
		}
	}
	printf("phi van chuyen cao nhat la: %f vnd\n",phimax);
}
void dinhmucx(float a[], int n, float x) {
	float s=0;
	printf("nhap dinh muc x: ");
	scanf("%f",&x);
	printf("vi tri nhung don hang co khoi luong nho hon dinh muc x la: \n");
	for(int i=1;i<=n;i++) {
		if (a[i]<x) {
			printf("%d",i);
			printf(" ");
			s+=a[i];
		}
	}
	if (s==0) {
		printf("khong co");
	}
    printf("\n");
	printf("tong khoi luong nhung don hang duoi dinh muc la: %0.1f\n",s);
}
void ghi (float a[], int n) {
	FILE *f;
	f=fopen("mathang.txt","w");
	fprintf(f,"%d\n",n);
	for(int i=1;i<=n;i++) {
		fprintf(f,"%f ",a[i]);
	}
	fclose(f);
}
void doc(float a[], int n) {
	FILE *f;
	float t=0;
	f=fopen("mathang.txt","r");
	fscanf(f,"%d\n",&n);
	for(int i=1;i<=n;i++) {
		fscanf(f,"%0.2f ",&a[i]);
		t+=a[i];
	}
	printf("trung binh cong cua cac mat hang la: %f",t/n);
	fclose(f);
}
main () {
	float a[100];int x;
	int n;
	nhap(a,n);
	phicaonhat(a,n);
	dinhmucx(a,n,x);
	ghi(a,n);
	doc(a,n);
}