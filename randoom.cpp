#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
main () {
	int a=0,b,c,d;
	char t[30],y[30],u[30],i[30];
	do {
	  strcpy(t,"admin");
	  strcpy(y,"123");
	  printf("tai khoan : ");
	  gets(u);
	  printf("mat khau : ");
	  gets(i);
	    if (strcmp(t,u)==0 && strcmp(y,i)==0) {
		    printf("dang nhap thanh cong: \n");
		  a=1;
  	    }
  	    else {
  	    	printf("vui long nhap lai: \n");
		  }
    }
      while (a!=1);
      if (a==1) {
      	char A[7],T[7],Y[6],B;
      	int k=100;
      	printf("ban co %d vnd \n",k);
		printf("dat chan hoac le: \n");
      	gets(A);
      	do {
		  printf("nhap so tien muon dat cuoc:\n ");
      	  scanf("%d",&c); 
		}
		while (c>k);
      	d=k-c; // số tiền còn lại khi đặt
      	srand(time(NULL));
      	B=rand()%100;
      	printf("con so ngau nhien la: %d \n",B);
      	if (B%2==0) {
      		strcpy(T,"chan");
      		if (strcmp(T,A)==0) {
      			printf("you win \n");
      			d=d+c*2;
      			printf("tien cua ban: %d",d);
			  }
			else {
				printf("you lose \n");
				printf("tien cua ban: %d",d);
			}
		  }
	    else if(B%2!=0) {
      		strcpy(T,"le");
      		if (strcmp(T,A)==0) {
      			printf("you win \n");
      			d=d+c*2;
      			printf("tien cua ban: %d",d);
			  }
			else {
				printf("you lose \n");
				printf("tien cua ban: %d",d);
			  }
		    }
        }
    }