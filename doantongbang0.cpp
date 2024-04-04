#include<stdio.h>
void nhap (int a[], int &n) {
	printf("nhap so phan tu cua mang:");
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
main () {
	int a[100];int b[100];int s=0;int n;
	nhap(a,n);
	for(int i=0;i<n;i++) {
		b[i]=a[i]+s;
		s=b[i];
		printf("%d ",b[i]);
	}
		for(int i=0;i<n;i++)
		{
			for (int j=1;j<n;j++) {
				if (i!=j) {
			        if (b[i]==b[j])	{
				      printf("doan co tong so = 0 la (%d;%d)",i+1,j);
			        }
			    }
		    }
        }
    }