#include<stdio.h>
struct sinhvien {
	char hovaten [50] ;
	int namsinh;
	char lop [30];
};
void nhap (struct sinhvien &a) {
	printf("nhap ho va ten : ");
	gets(a.hovaten);
	fflush(stdin);
	printf("nhap lop: ");
	scanf("%s",&a.lop);
	fflush(stdin);
	printf("nhap nam sinh: ");
	scanf("%d",&a.namsinh);
	fflush(stdin);

}
void in( struct sinhvien a) {
	printf("ho va ten : %s \n",a.hovaten);
	printf("lop: %s \n", a.lop);
	printf("nam sinh: %d \n",a.namsinh);
}
main () {
	struct sinhvien b;
	nhap(b);
	in(b);
}