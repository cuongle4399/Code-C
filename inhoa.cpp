#include <stdio.h>
#include<string.h>
/*void nhap( char n[]) {
	printf("nhap ho va ten : ");
	gets(n);
}
void inhoa (char n[]) {
	strupr (n);
	puts (n);
	int b=strlen(n);
	printf("chuoi ky tu ban vua nhap co %d ky tu: ",b);
}
int main () {
	char n[30],a[30],s[30];
	nhap(n);
	inhoa(n);
	printf("ban lop nao : ");
	gets(a);
	strcat(s,n);
	strcat(s,a);
	puts(s);
}*/
void taotaikhoan(char a[], char b[]) {
	printf("nhap tai khoan can dang ky: ");
	gets(a);
	printf("nhap mat khau can dang ky : ");
	gets(b);	
}
void dangnhap (char x[], char y[], char a[], char b[]) {
	int t;
	do {
	  printf("nhap tai khoan di : ");
	  gets(x);
	  printf("nhap mat khau di : ");
	  gets(y);
	  if (strcmp (a,x)==0 && strcmp (b,y)==0) {
		  printf("dang nhap thanh cong");
		  t=0;
	  }	
	  else {
	     printf("sai tai khoan mat khau \n");
	     printf("vui long nhap lai: \n");
	     t=1;
           }
	  }
	while (t==1);
    }
main () {
	char a[30],b[30],x[30],y[30],k[20];
	taotaikhoan(a,b);
	dangnhap(x,y,a,b);
	strcpy(k,"\n hello ae nha");
	puts(k);
}