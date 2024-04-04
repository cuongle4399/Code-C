#include<stdio.h> 
struct thuedoanhnghiep {
	char tendoanhnghiep[100];
	int doanhthu;
};
void nhap (struct thuedoanhnghiep &n) {
	printf("nhap ten doanh nghiep: ");
	gets(n.tendoanhnghiep);
	fflush(stdin);
	printf("doanh thu: ");
	scanf("%d",&n.doanhthu);
}
int tinhthue (struct thuedoanhnghiep n) {
	if (n.doanhthu>50000000) {
		n.doanhthu=n.doanhthu*0.02;
	}
	else {
		n.doanhthu=0;
	}	
	return n.doanhthu;
}
main () {
	struct thuedoanhnghiep s;
	nhap(s);
	printf("tien thue la; %d",tinhthue(s));
}
