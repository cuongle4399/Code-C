#include<stdio.h>
#include<math.h>
int bai_tap(int n) {
	int s=0;
for(int i=1;i<=n;i++) {
	s=pow(i,n);
}
return s; 
}
main () {
	int n,t;
	do{
	printf("nhap n: \n");
	scanf("%d",&n);
	if(n<0) {
		printf("nhap lai di");
	}
	else
	printf("luy thua cua n la: %d \n",bai_tap(n));
	printf("nhap lai nx khong, neu muon nhap lai thi nhap so 1: \n");
	scanf("%d",&t);
	}
	while (t=1);
	
}