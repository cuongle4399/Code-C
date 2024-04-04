#include <stdio.h>
void nhap(int a[], int &n)
{
	printf("nhap so phan tu n:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
main () {
	int a[100];int sum=0,n,k=0;
	nhap(a,n);
	for(int i=0;i<n-1;i++) {
		int d=0;
		for (int j=i+1;j<n;j++) {
			d=a[j]+d;
		    if (d+a[i]==0 && k==0 ) {
				printf("doan co tong bang 0 la: [%d;%d]",i,j);
		    	k++;
		    }
		}
	}
	if (k==0) {
		printf("khong tim thay doan co tong bang 0 trong mang");
	}
}
	