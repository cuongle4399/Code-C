#include<stdio.h>
int max(int a[],int n) {
	int max=a[0];
	for (int i=1;i<=n;i++) {
		if(a[i]>max) {
			max=a[i];
		}
	}
	return max;
}
main () {
int a[20];
int n;
printf("nhap so phan tu cua mang: ");
scanf("%d",&n);
printf("nhap gia tri cua mang: \n");
for (int i=0;i<=n;i++) {
	printf("nhap gia tri phan mang a[%d] thu \n",i);
	scanf("%d",&a[i]);
}
int b=max(a,n);
printf("gia tri max la: %d",b);
}