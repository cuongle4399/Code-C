#include<stdio.h> 
void nhap(int a[],int &n) {
	printf("nhap so nhan vien : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		printf("tuoi nhan vien thu %d: ",i);
		scanf("%d",&a[i]);
	}
}
int dem(int a[],int n,int x) {
	int t=0;
	for(int i=1;i<=n;i++) {
		if (a[i]==x) {
			t++;
		}
	}
	return t;
}
void ktra(int a[], int n, int x) {
	printf("nhung nhan vien bang tuoi x: ");
	for(int i=1;i<=n;i++) {
		if(a[i]==x) {
			printf("%d ",i);
		}
	}
}
void ghitep(int a[], int n) {
	FILE *f;
	f=fopen("sotuoi.txt","w");
	fprintf(f,"%d\n",n);
	for(int i=1;i<=n;i++) {
		fprintf(f,"%d ",a[i]);
	}
	fclose(f);
}
void doctep(int a[],int n) {
	int s=0;int i;
	FILE *f;
	f=fopen("sotuoi.txt","r");
	fscanf(f,"%d",&n);
	for(int i=1;i<=n;i++) {
		fscanf(f,"%d",&a[i]);
		s+=a[i];
	}
	s=s/n;
	printf("trung binh cong tuoi cua cac nhan vien la: %d",s);
	fclose(f);
}
main () {
	int x; int a[100];int n;
	nhap(a,n);
	printf("nhap x: ");
	scanf("%d",&x);
	printf("so nhan vien co cung tuoi = voi x la: %d \n",dem(a,n,x));
	ktra(a,n,x);
	ghitep(a,n);
	doctep(a,n);
}