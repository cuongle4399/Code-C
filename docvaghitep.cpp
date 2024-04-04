#include<stdio.h>
void ghitep(int a[],int &n){
	FILE *f;
	f=fopen("vecto.txt","w");
	printf("so chieu cua vecto: ");
	scanf("%d",&n);
	fprintf(f,"so chieu cua vecto : %d \n",n);
	for(int i=0;i<n;i++) {
		printf("nhap phan tu thu %d: ", i);
		scanf("%d",&a[i]);
		fprintf(f,"%d",a[i]);
	}
	fclose(f);
}
int doctep(int a[], int n) {
	FILE *f;
	int s=0;
	f=fopen("vecto.txt","r");
	fscanf(f,"%d",&n);
	for(int i=0;i<n;i++) {
		fscanf(f,"%d",&a[i]);
		s+=a[i];
	}
	fclose(f);
	return s;
}
main () {
	int a[100];int n;
	ghitep(a,n);
	printf("tong phan tu trong vecto: %d",(doctep(a,n)));
}