#include<stdio.h>
struct nhanvien {
	char hoten[100];
	int luong;
	int phucap;
};
void nhap(struct nhanvien &n){
	printf("nhap ho va ten: ");
	gets(n.hoten);
	printf("nhap luong: ");
	scanf("%d",&n.luong);
	printf("nhap phu cap: ");
	scanf("%d",&n.phucap);
	getchar();
}
int thuclinh(struct nhanvien n){
	int b=0;
	b=n.luong+n.phucap;
	return b;
}
main (){
	int n;
	struct nhanvien a;
	struct nhanvien b;
	nhap(a);
	nhap(b);
	if(thuclinh(a)<thuclinh(b)){
		printf("tong tien cua nhan vien %s:%d ",a.hoten,thuclinh(a));
	}
	else if (thuclinh(b)<thuclinh(a)){
		printf("tong tien cua nhan vien %s:%d ",b.hoten,thuclinh(b));
	}
	else {
		printf("tong tien cua nhan vien %s:%d\n",a.hoten,thuclinh(a));
		printf("tong tien cua nhan vien %s:%d\n",b.hoten,thuclinh(b));
	}
}