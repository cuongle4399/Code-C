#include<stdio.h>
void nhap (float a[], int &n) {
	printf("nhap so mon hoc: ");
	scanf("%d",&n);
	for(int i=0; i<n;i++) {
		printf("nhap diem cua mon hoc thu %d: ",i);
		scanf("%f",&a[i]);
	}
}
float trungbinhcong (float a[], int n) {
	float s=0;
	for(int i=0;i<n;i++) {
		s+=a[i];
	}
	s=s/n;
	return s;
}
void thangdiem4(float a[], float b[], int n) {
     printf("\n Diem cac mon hoc doi sang thang diem 4 là");
    for (int i = 0; i < n; i++) {
        if (a[i] >= 9.0) {
            b[i] = 4.0;
            printf("\nb%d] = %.1lf",i,b[i]);
        } else if (a[i] >= 8.0&& a[i]<9.0) {
            b[i] = 3.5;
            printf("\nb[%d] = %.1lf",i,b[i]);
        } else if (a[i] >= 7.0&& a[i]<8.0) {
            b[i] = 3.0;
            printf("\nb[%d] = %.1lf",i,b[i]);
        } else if (a[i] >= 6.0&& a[i]<7) {
            b[i] = 2.5;
            printf("\nb[%d] = %.1lf",i,b[i]);
        } else if (a[i] >= 5.0&& a[i]<6) {
            b[i] = 2.0;
            printf("\nb[%d] = %.1lf",i,b[i]);
        } else if (a[i] >= 4.0&& a[i]<5) {
            b[i] = 1.5;
            printf("\nb[%d] = %.1lf",i,b[i]);
        }         
        else {
            b[i] = 0.0;
            printf("\nb[%d] = %.1lf",i,b[i]);
        }
    }
}

void ghidiem(float a[], int &n) {
	FILE *f;
	f=fopen("diem.txt","w");
	printf("nhap so mon hoc: ");
	scanf("%d",&n);
	fprintf(f,"%d \n",n);
	for(int i=0;i<n;i++) {
		printf("nhap diem mon hoc thu %d: ",i);
		scanf("%f",&a[i]);
		fprintf(f,"%0.2f ",a[i]);
	}
	fclose(f);
}
float diemcaonhat (float a[], int n) {
	FILE *f;
	f=fopen("diem.txt","r");
	fscanf(f,"%d",&n);
	float max=a[0];
	for(int i=0;i<n;i++) {
		fscanf(f,"%f",&a[i]);
		if (a[i]>max) {
			a[i]=max;
		}
	}
	fclose (f);
	return max;
}
main () {
	float a[100]; int n;float b[100];
	nhap(a,n);
	printf("trung binh cong: %0.2f \n",trungbinhcong(a,n));
    thangdiem4(a,b,n);
	ghidiem(a,n);
	printf("diem cao nhat: %f ",diemcaonhat(a,n));
}                        