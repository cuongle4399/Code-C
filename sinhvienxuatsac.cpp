#include<stdio.h>
struct sinhvien{
	char hoten[100];
	float dtb;
	float drl;
};
void nhap (struct sinhvien &a) {
	printf("nhap ho ten : ");
	gets(a.hoten);
	printf("nhap diem trung binh: ");
	scanf("%f",&a.dtb);
	printf("nhap diem ren luyen: ");
	scanf("%f",&a.drl);
}
int ktra(struct sinhvien a) {
	if ((a.dtb>=9 && a.drl>=9.5)) {
		return 1;
	}
	else 
	   return 0;
}
main () {
	struct sinhvien k;
	nhap(k);
	if (ktra(k)==1) {
		printf("sinh vien nay la loai xuat sac: ");
	}
	else 
	   printf("sinh vien nay deo phai xuat sac: ");
}