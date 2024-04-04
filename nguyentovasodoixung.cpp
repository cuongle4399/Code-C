#include<stdio.h>
#include<math.h> 
int ktnguyento(int n) {
	if (n<2) {
		return 0;
		}
	for(int i=2;i<=sqrt(n);i++) {
		if(n%i==0) {
			return 0;
		}
		else
		   return 1;
		   }
	return 1;
}
int sodoixung(int a) {
	int k,l=0;
	while (a!=0) {
	k=a%10;
	a=a/10;
	l=l*10+k;
   }
    return l;
}
main () {
	int x;
	printf("nhap so can kiem tra nguyen to: ");
	scanf("%d",&x);
	if (ktnguyento(x)==1) {
		printf("%d: nguyen to:\n ",x);
	}
	else {
	   printf("%d: deo phai so nguyen to \n",x);
	   }
	printf("so doi xung la: %d",sodoixung(x));
}
