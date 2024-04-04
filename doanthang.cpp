#include<stdio.h>
#include<math.h>
struct doanthang{
	float a[100];
	float b[100];
	int n;
};
void nhap( struct doanthang &k) {
	printf("nhap so diem cua toa do a va b: \n");
	scanf("%d",&k.n);
	printf("nhap toa do diem cua a: \n");
	for(int i=0;i<k.n;i++) {
		printf("diem toa do thu %d: \n",i);
		scanf("%f",&k.a[i]);
	}
	printf("nhap toa do diem cua b: \n");
	for(int i=0;i<k.n;i++) {
		printf("diem toa do thu %d: \n",i);
		scanf("%f",&k.b[i]);
}
}
float dodai(struct doanthang k) {
	float t,n,m=0;
	for(int i=0;i<k.n;i++) {
		t=pow((k.a[i]-k.b[i]),2);
		m=t+m;
	}
	return sqrt(m);
}
main () {
	int n;
	struct doanthang s;
	nhap(s);
	printf("do dai cua 2 diem toa do la: %0.2f",dodai(s));
}