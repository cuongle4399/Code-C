#include<stdio.h>	
#include<math.h>
void nhap(int a[],int &n) {
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
}
void luuvecto(int a[],int n) {
	int v[100];
	FILE *f;
    f=fopen("vecto.txt","w");
    printf("nhap n dong: ");
    scanf("%d",&n);
	fprintf(f,"so chieu vecto %d ",n); 
    for (int i=0;i<n;i++) {
    	printf("phan tu thu %d ",i);
    	scanf("%d",&v[i]);
    	fprintf(f,"%d",v[i]);
	}
	fclose(f);
}
 int main() {
	int t,k[100],n,a[100],u[100],v[100];
	int x=0;
	nhap(a,n);
	printf("gia tri module la: %f",module(a,n));
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
		printf("u vs v la cung phuong: ");
	}
	if (x!=0) {
		printf("u va v la khong cung phuong:  ");
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
		printf("u vs v la cung phuong: ");
	}
	if (x!=0) {
		printf("u va v la khong cung phuong:  ");
	}
}
   luuvecto(a,n);
   return 0;
}
