#include<stdio.h>
struct thuethunhap {
	char hoten[100];
	int thunhapcanhan;
};
void nhap(struct thuethunhap &n, int t){
	printf("nhap ho va ten: ");
	gets(n.hoten);
	fflush(stdin);
	printf("thu nhap ca nhan: ");
	scanf("%d",&n.thunhapcanhan);
}
int thue( struct thuethunhap n) {
	int t=n.thunhapcanhan;
	if (t > 5000000) {
		t=t*0.1;
	}
	else {
		t=0;
	}
	return t;
}
main () {
	int t;
	struct thuethunhap s;
	nhap(s,t);
	printf("tien thue la: %d",thue(s));
}
