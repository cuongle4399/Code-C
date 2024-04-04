#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char b[1];
    int so_tien_ban_co = 100.000;
    float tien_dat;
    printf("Dat cuoc chan hay le: ");// nhập chẵn hoặc lẻ
    scanf("%s", b);
    printf ("nhap so tien muon choi: "); // số tiền muốn chơi
    scanf("%f",&tien_dat);
	srand(time(NULL));
	int a = rand(); //in ra 4 số ngẫu nhiên xok 
	int k = a % 100; // hạ xuống 2 số
    printf("Con so ngau nhien la %d: ", k); 
    if (k % 2 == 0) { // phân biệt số ngẫu nhiên là chăn hay lẻ
        printf("chan \n"); 
		char t[] = "chan"; 
		int l = strncmp(t, b, strlen(t)); // khai báo và so sánh số ký tự của t và b có bằng nhau không
        if (l == 0) { // 0 là bằng nhau, số âm là ký tự t nhỏ b, số dương thì t lớn b
            printf("thang roi em oi\n");
			int tien_goc =tien_dat*1.9;
			printf("tien cua ban %d \n", tien_goc);
	} else {
            printf("thua roi em oi \n");
            int tien_goc= so_tien_ban_co-tien_dat;
            printf("tien cua ban %d",tien_goc);
        }
    } else {
        printf("le \n");
		char t[] = "le";
		int l = strncmp(t, b, strlen(t));
        if (l == 0) {
            printf("thang roi em oi\n");
            int tien_goc =tien_dat*1.9;
			printf("tien cua ban %d", tien_goc);
        } else {
            printf("thua roi em oi \n");
            int tien_goc= so_tien_ban_co-tien_dat;
            printf("tien cua ban %d",tien_goc);
        }
    }
    return 0;
}