#include<stdio.h>	
#include<math.h>
/*void nhap(int a[],int &n) {
	printf("nhap so phan tu vecto: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		printf("nhap vecto thu %d: ",i);
		scanf("%d",&a[i]);
	}
}
float module(int a[],int n) {
	int s=0;float t;
	for(int i=0;i<n;i++) { 
	s=s+pow(a[i],2)	;
	}    
	t=sqrt(s);
	return t;
}
void nhapmangv(int v[],int &n) {
	printf("nhap so phan tu vecto: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		printf("nhap vecto thu %d cua mang v: ",i);
		scanf("%d",&v[i]);
	}
}
void nhapmangu(int u[],int &n) {
    printf("nhap so phan tu vecto: ");
    scanf("%d",&n);
	for(int i=0;i<n;i++) {
		printf("nhap vecto thu %d cua mang u: ",i);
		scanf("%d",&u[i]);
	}
}*/
void ghitep(int y[], int &n) {
	FILE *f;
	f=fopen("vecto.txt","w");
	printf("nhap so chieu cua vecto: ");
	scanf("%d",&n);
	fprintf(f,"so chieu cua vecto la: %d",n);
	for(int i=0;i<n;i++) {
		printf("nhap phan tu thu %d: ",i);
		scanf("%d",&y[i]);
		fprintf(f,"%d ",y[i]);
	}
	fclose(f);
}
int doctep(int y[], int n) {
	FILE *f;
	int s=0;
	f=fopen("vecto.txt","r");
	fscanf(f,"%d",&n);
	for(int i=0;i<n;i++) {
		fscanf(f,"%d",y[i]);
		s+=y[i];
	}
	return s;
}
 int main() {
	int t,k[100],n,a[100],u[100],v[100],y[100];
	int x=0;
	/*nhap(a,n);
	printf("gia tri module la: %f \n",module(a,n));
	nhapmangv(v,n);
	nhapmangu(u,n);
	if (v[0]>u[0]) {
	for (int i=0;i<n;i++) {
		k[i]=v[i]/u[i];
		if (k[i]==k[0]) {
			k[i]=k[0];
			x=x+0;
		}
		else {
			x=x+1;
		}
	}
	if (x==0) {
		printf("u vs v la cung phuong:\n ");
	}
	if (x!=0) {
		printf("u va v la khong cung phuong: \n ");
	}
}
	if (v[0]<u[0]) {
	for (int i=0;i<n;i++) {
		k[i]=u[i]/v[i];
		if (k[i]==k[0]) {
			k[i]=k[0];
			x=x+0;
		}
		else {
			x=x+1;
		}
	}
	if (x==0) {
		printf("u vs v la cung phuong: \n ");
	}
	if (x!=0) {
		printf("u va v la khong cung phuong: \n  ");
	}
}*/
   ghitep(y,n);
   printf(" tong toa do trong tep %d \n: ",doctep(y,n));
}
