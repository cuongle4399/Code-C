#include<stdio.h>
main ()
{
	int n;
	printf("nhap mot so tu 1 den 7 : ");
	scanf("%d",&n);
	switch (n) {
		case 1: printf("day la chu nhat");
		break;
		case 2: printf("day la thu 2");break;
		case 3: printf("day la thu 3");break;
		case 4: printf("day la thu 4");break;
	    case 5: printf("day la thu 5");break;
	    case 6: printf("day la thu 6");break;
	    case 7: printf("day la thu 7");break;
	    default: printf("nhap sai so roi");break; }
}