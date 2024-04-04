#include<stdio.h>
struct thongtin {
	char hoten[50];
	int tuoi;
	char lop[30];
};
void thongtin(struct thongtin &b) {
	printf("nhap ho va ten : ");
	gets(b.hoten);
	fflush(stdin);
	printf("nhap tuoi: ");
	scanf("%d",&b.tuoi);
	fflush(stdin);
	printf("nhap lop cua ban: ");
	gets(b.lop);
	fflush(stdin);
}
void ghitep(struct thongtin b) {
	FILE *f;
	f=fopen("thongtin7.txt","w");
	fprintf(f,"%s %d %s",b.hoten,b.tuoi,b.lop);
	fclose (f);
}
void doctep(struct thongtin b) {
	FILE *f;
	f=fopen("thongtin7.txt","r");
	fscanf(f,"%s%d%s",&b.hoten,&b.tuoi,&b.lop);
	fclose(f);
	printf("%s %d %s",b.hoten,b.tuoi,b.lop);
}
main () {
	struct thongtin a;
	thongtin(a);
	ghitep(a);
    doctep(a);
}