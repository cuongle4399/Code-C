#include<stdio.h> 
void nhap (int a[], int &n) {
	printf("nhap so tuoi cua n nhan vien: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		printf("so tuoi cua nhan vien thu %d: ",i);
		scanf("%d",&a[i]);
	}
}
int tbcong (int a[], int n) {
	int s=0;
	int b=0;
	for(int i=1;i<=n;i++) {
		if (a[i]>30) {
			s+=a[i];
			b++;
		}
	}
	return s/b;
}
main () {
	int a[100];int n;int s;
	nhap(a,n);
	//printf("trung binh cong tuoi cua nhan vien co tren 30 tuoi la: %d \n",tbcong(a,n));
    int max=a[1];
	for (int i=2;i<=n;i++) {
		if (a[i]>max) {
			max=a[i];
			s=i;
		}
	}
	printf("tuoi lon nhat: %d tai vi tri %d",max,s);
}