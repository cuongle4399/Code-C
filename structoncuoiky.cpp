#include<stdio.h> 
struct lop {
	char malop[100];
	char tenlop[100];
	int siso;
};
void nhap(struct lop &n) {
	printf("nhap ma lop: ");
	gets(n.malop);
	printf("nhap ten lop :");
	gets(n.tenlop);
	printf("nhap si so lop: ");
	scanf("%d",&n.siso);
}
void nhom (struct lop n) {
	if(n.siso<=20) {
		printf("nhom 1");
	}
	else if (n.siso>20 && n.siso <=60) {
		printf("nhom 2");
	}
	else {
		printf("nhom 3");
	}
}
main () {
	struct lop n;
	nhap(n);
	nhom (n);
}