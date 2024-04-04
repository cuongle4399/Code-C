#include<stdio.h> 
int luythua(int a,int n)
{
int s=1;
if (n==0) {
	s=1;
}
else {
	for(int i=1;i<=n;i++) {
		s=s*a;
	}

} 
return s;
}
main ()
{
	printf("2 mu 5 la: %d",luythua(2,5));
}