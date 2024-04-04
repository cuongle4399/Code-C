#include<stdio.h> 
#include<math.h>
void nhap(int a[], int &n) {
	printf("nhap so phan tu cua day so nguyen duong:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		printf("Nhap so nguyen duong thu %d:",i);
		scanf("%d",&a[i]);
	}
}
int kiemtra(int x) {
	int b=0;
	for(int i=1;i<x;i++) {
		if (x%i==0) {
			b=b+i;
		}
	}
	return b;
}
int capsocong(int a[], int n) {
	int k=0;
	int s=a[2]-a[1];
	for(int i=2;i<=(n-1);i++) {
		if (a[i+1]-a[i]==s) {
			k++;
		}
	}
	return k;
}
/*void ghitep(int a[], int n) {
	FILE *f;
	f=fopen("numbers.txt","w");
	int k[1]=fabs(max-[1]);
	int max=a[1];
	for(int i=1;i<=n;i++) {
		if(a[i]>max) {
			max=a[i];
		}
		fprintf(f,"%d ",max);
	}
	for(int i=2;i<=max;i++) {
		if (fabs(max-a[i])<k) {
			k=fabs(max-a[i]);
			fprintf(f,"%d",a[i])
		}
		else {
			fprintf(f,"%d ",a[1]);
		}
	}
	
}*/
main () {
	int a[100]; int n,x;
	nhap(a,n);
	for(int i=1;i<=n;i++) {
		if (kiemtra(a[i])==a[i]) {
			printf("%d la so hoan thien\n",a[i]);
		}
		else {
		    printf("%d khong phai la so hoan thien\n",a[i]);
		}
	}	
	if (capsocong(a,n)==(n-2)) {
		printf("day la day so cap so cong\n");
	}
	else {
		printf("day khong phai la day so cap so cong\n");
	}
}
