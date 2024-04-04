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
	int a[100];int s,n,k=0,d=0;
	nhap(a,n);
	printf("nhap tong s cua 2 so bat ky:");
	scanf("%d",&s);
	for(int i=0;i<n;i++) {
		for(int j=1;j<n-1;j++)
		{
			if (i!=j) {
				if (a[i]+a[j]==s && (i+j)!=d) {
					printf("2 so co tong bang %d la: %d va %d tai vi tri %d va %d\n",s,a[i],a[j],i,j);
					k++;
					d=i+j;
				}
			}
		}
	}
	if (k==0) {
		printf("khong tim thay 2 so co tong bang s trong mang");
	}
}
	