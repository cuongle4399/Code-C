#include<stdio.h>
void nhap (int a[], int &n) {
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		printf("nhap phan tu thu %d: ",i);
		scanf("%d",&a[i]);
			}
}
int dem (int a[], int n) {
	int k=0;
	for(int i=2;i<=n;i++) {
		if (a[i]==a[1]) {
			k++;
		}
	}
	return k;
}
bool kiemtra (int a[], int n) {
	int t=0;
	for(int i=1;i<=n;i++) {
		if (a[i]%7==0) {
			t++;
		}
	}
	if (t==n) {
		return true;
	} 
	else {
		return false;
	}
}
void ghi(int a[], int n){
	FILE *f;
	f=fopen("sole.txt","w");
	for(int i=1;i<=n;i++) {
		if (a[i]%2!=0) {
			fprintf(f,"%d\n",a[i]);
		}
	}
	fclose(f);
}
void doctep(int a[], int n) {
	FILE *f;
	int min=a[1];
	f=fopen("sole.txt","r");
	for(int i=1;i<=n;i++) {
		if (a[i]<min) {
			min=a[i];
		}
	}
	fscanf(f,"%d",&min);
	printf("gia tri nho nhat %d",min);
	fclose(f);
}
main () {
	int a[100],n;
	nhap(a,n);
	printf("co %d giong voi gia tri dau.\n",dem(a,n));
	if (kiemtra(a,n)==true) {
		printf("toan bo gia tri trong deu chia het cho 7.\n");
	}
	else {
		printf("trong mang co so khong chia het cho 7.");
	}
	ghi(a,n);
	doctep(a,n);
}