#include <stdio.h>
int isPrime(int number) {
    if (number <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return 0;
        }
    }

    return 1;
}
int isprime;
main ()
{
	int a,b,n;
	printf("nhap doan dau: ");
	scanf ("%d",&a);
	printf("nhap doan cuoi: ");
	scanf ("%d",&b);
	if(a>b)
	{
		printf("vui long nhap phan tu dau nho hon phan tu cuoi");
	}
	else if (a<b)
	for (int i=a;i<=b;i++)
	{
		printf(" cac phan tu cua doan [a,b] %d \n",i);
	}
	else
	{
		printf (" cac phan tu cua doan [a,b] %d \n",a,b);
	}

    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d la so nguyen to.\n", n);
    } else {
        printf("%d khong phai la so nguyen to.\n", n);
    }

    return 0;	
}
