#include<stdio.h>
void nhap(float a[], int &n) {
	printf("nhap so ngay: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		printf("nhiet do ngay thu %d: ",i);
		scanf("%f",&a[i]);
	}
}
float nhiettb(float a[], int n, int e) {
	float u=0;
	if (e<=n){
	for(int i=1;i<=e;i++){
		u+=a[i];
	}
}
	return u/e;
}
void ngaymax(float a[],int n) {
	int max=0;int d[100];
	for(int i=1;i<=n;i++) {
		if (a[i]>max) {
			max=a[i];
			i=max;	
		}
    }
    printf("nhung ngay co nhiet do trung binh cao nhat la: ");
    for(int i=1;i<=n;i++) {
    	if(a[i]==max) {
    		printf("%d ",i);
		}
	}
}
void ghinhietdo (float a[], int n) {
	FILE *f;
	f=fopen("nhietdo.txt","w");
	fprintf(f,"%d\n",n);
	for(int i=1;i<=n;i++) {
		fprintf(f,"%0.1f ",a[i]);
	}
	fclose(f);
}
void docnhietdo (float a[], int n) {
	FILE *f;
	f=fopen("nhietdo.txt","r");
	fscanf(f,"%d",&n);
	for(int i=1;i<=n;i++) {
		fscanf(f,"%0.1f",&a[i]);
		if (a[i]>35) {
			printf("%0.1f ",a[i]);
		}
	}
	fclose(f);
}
main () {
	float a[100];int n,e;
	nhap(a,n);
	printf("nhap ngay : ");
	scanf("%d",&e);
	printf("nhiet do trung binh tu ngay dau den n2 la: %0.2f \n",nhiettb(a,n,e));
	ngaymax(a,n);
	ghinhietdo(a,n);
	docnhietdo(a,n);
}