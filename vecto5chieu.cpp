#include<stdio.h>
#include<math.h>
main () {
int a[100],b[100]; int s=0;int t[100];
printf("nhap 2 vecto a va b 5 chieu: \n");
for(int i=0;i<5;i++) {
	printf("nhap phan tu thu %d cua vecto a: ",i);
	scanf("%d",&a[i]);
	}
for(int i=0;i<5;i++) {
	printf("nhap phan tu thu %d cua vecto b: ",i);
	scanf("%d",&b[i]);
	s+=pow(b[i],2);
	}
printf("do dai cua vecto b la: %f",sqrt(s));
printf("vecto c la: ");
for(int i=0;i<5;i++) {
	t[i]=a[i]+b[i];
	printf("%d ",t[i]);
}
printf("\n");
FILE *f;
f=fopen("vecto.txt","r");
for(int i=0;i<5;i++) {
	fscanf(f,"%d",t[i]);
	printf("%d ",t[i]);
}
}
