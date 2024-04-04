#include<stdio.h>	
#include<math.h>
void luuvecto(int y[],int &n) {
	FILE *f;
    f=fopen("vecto.txt","w");
    printf("nhap n dong: ");
    scanf("%d",&n);
	fprintf(f,"%d \n",n); 
    for (int i=0;i<n;i++) {
    	printf("phan tu thu %d \n",i);
    	scanf("%d",&y[i]);
    	fprintf(f,"%d",y[i]);
	}
	fclose(f);
}
int doctep( int y[], int n) {
	FILE *f;
	int s=0;
	f=fopen("vecto.txt","r");
	fscanf(f,"%d",&n);
			for(int i=0;i<n;i++) {
				fscanf(f,"%d",&y[i]);
				s=s+y[i];
			}
	fclose(f);
	return s;
}
 int main() {
	int n,y[100];
	int x=0;
	luuvecto(y,n);
   printf(" tong toa do trong tep %d \n: ",doctep(y,n));
   return 0;
}
