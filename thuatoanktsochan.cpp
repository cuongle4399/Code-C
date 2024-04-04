#include<stdio.h>
int ktsochan (int n) {
	if (n==0) {
		return 1;
	}
	else if (n==1) {
		return 0;
	}
	else {
		return ktsochan(n-2);
	}
}
main () {
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	if (ktsochan(n) == 1) {
		printf("%d la so chan ",n);
	}
	else {
		printf("%d la so le",n);
	}
}