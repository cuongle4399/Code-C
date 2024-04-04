#include<stdio.h>
struct dien{
	char hovaten[100];
	int mahopdong;
	int chisocu;
	int chisomoi;
	int tiendien;
};
void nhap (struct dien &n){
	printf("nhap ho va ten: ");
	gets(n.hovaten);
	printf("nhap ma hop dong: ");
	scanf("%d",&n.mahopdong);
	printf("nhap chi so cu: ");
	scanf("%d",&n.chisocu);
	printf("nhap chi so moi: ");
	scanf("%d",&n.chisomoi);
}
int tiendien(struct dien n) {
	int s=n.chisomoi-n.chisocu;
	if (s<=100) {
		s=s*100;
	}
	else {
		s=s*150;
	}
	return s;
}
main () {
	struct dien a;
	nhap(a);
	printf("tien dien thang nay la: %d",tiendien(a));
}