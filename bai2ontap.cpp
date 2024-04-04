#include<stdio.h>
struct giacuoc {
	int sokm;
	int dongia1=2000;
	int dongia2=1500;
};
void nhap(struct giacuoc &a) {
	printf("nhap so km: ");
	scanf("%d",&a.sokm);
}
int tinhtien(struct giacuoc a) {
	int b;
	if (a.sokm<=10) {
		b=a.sokm*a.dongia1;
	}
	if (a.sokm>10) {
		b=10*a.dongia1+(a.sokm-10)*a.dongia2;
	}
	return b;
}
main () {
	struct giacuoc s;
	nhap(s);
	printf("di %d km thi so tien phai tra la: %d",s.sokm,tinhtien(s));
}