#include<stdio.h>
struct human {
	float height ;
	float weight;
};
void nhap (struct human &h) {
	printf("nhap chieu cao : ");
	scanf("%f",&h.height);
	printf("nhap can nang: ");
	scanf("%f",&h.weight);
}
main () {
	struct human h;
	nhap (h);
}