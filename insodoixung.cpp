#include<stdio.h> 
void insodoixung( int x[], int n) {
	int s=0,a;
	for(int i=0; i<n;i++) {
		x[i]=a%10;
		scanf("%d",&x[i]);
		a=a/10;
		printf("%d",x[i]); 
	}
}	
main () {
	int n,a;
	int x[100];
	printf("nhap so chu so: ");
	scanf("%d",&n);
	printf("nhap so nguyen duong: ");
	scanf("%d",&a);
	insodoixung(x,a);
}