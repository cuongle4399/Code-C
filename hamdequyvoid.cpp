	#include<stdio.h>
	void nhapmang(int n, int a[]) {
		printf("nhap so phan tu mang: ");
		scanf("%d",&n);
		for(int i=0;i<n;i++) {
			printf("nhap gia tri cua phan tu a[%d]",i);
			scanf("%d",&a[i]);
		}
	}
    int tongchan (int n, int a[]) {
    	int s=0;
    	for (int i=0;i<n;i++) {
    		if(a[i]%2==0) {
    			s=s+a[i];
			}
		}
		return s;
	}
	int main () {
		int a[100];int n;int b;
		nhapmang(n,a);
		printf("tong so chan trong mang : %d",tongchan(n,a));
	}