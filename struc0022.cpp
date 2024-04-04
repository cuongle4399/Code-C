#include<stdio.h>
struct sinhvien {
	char hoten[30] ;
	int tuoi;
	char lop[30];
};
void nhap (struct sinhvien &n) {
	printf("nhap ho va ten: ");
	gets(n.hoten);
	printf("nhap tuoi: ");
	scanf("%d",&n.tuoi);
	printf("nhap lop: ");
	scanf("%s",&n.lop);
}
void in (struct sinhvien n) {
	puts(n.hoten);
	puts(n.lop);
	printf("tuoi: %d",n.tuoi);
}
main () {
	struct sinhvien a;
	nhap(a);
	in(a);
}