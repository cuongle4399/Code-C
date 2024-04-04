#include<stdio.h> 
struct diem  {
	char hoten[100];
	float toan;
	float van;
	int giotinh;	
};
void nhap ( struct diem &n) {
	printf("nhap ho va ten:");
	gets(n.hoten);
	printf("nhap diem toan:");
	scanf("%f",&n.toan);
	printf("nhap diem van:");
	scanf("%f",&n.van);
	printf("neu la nam thi nhap 1 con nu thi nhap 0:");
	scanf("%d",&n.giotinh);
}
float diemtb (struct diem n) {
	float tb=(n.toan*2+n.van)/3;
	return tb;
}
main () {
	struct diem a;
	nhap(a);
	printf("diem trung binh: %f\n",diemtb(a));
	if (diemtb(a)>=5) {
		printf("DAT");
	}
	if (diemtb(a)!=5 && diemtb(a) <5) {
		if (a.giotinh==1) {
			printf ("KHONG DAT");
		}
		else 
		{
			printf("DAT");
		}
	}
}