#include<stdio.h>
struct hocsinh {
	char hoten[100];
	float toan;
	float van;
};
void nhap (struct hocsinh &a) {
	printf("nhap ho va ten: ");
	gets(a.hoten);
	printf("nhap diem toan :");
	scanf("%f",&a.toan);
	printf("nhap diem van: ");
	scanf("%f",&a.van);
}
int dtb(struct hocsinh a) {
	int s;
	s=(a.toan+a.van)/2;
	return s;
}
main () {
	struct hocsinh s;
	nhap(s);
	if (dtb(s)>=5) 
		printf("diem trung binh %d cua ban la DAT: ",dtb(s));
	else 
	    printf("KHONG DAT");
}