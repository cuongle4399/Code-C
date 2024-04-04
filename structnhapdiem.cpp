#include<stdio.h>
struct diemhocphan{
	float diemchuyencan;
    float giuaky;
    float cuoiky;
};
void sinhvien( struct diemhocphan &s) {
	printf("nhap diem chuyen can: \n");
	scanf("%f",&s.diemchuyencan);
	printf("diem giua ky: \n ");
	scanf("%f",&s.giuaky);
	printf("diem cuoi ky : \n");
	scanf("%f",&s.cuoiky);
}
float diemhocphansinhvien(struct diemhocphan s){
	float t=0;
	t=(s.diemchuyencan*0.1)+(s.giuaky*0.3)+(s.cuoiky*0.6);
	return t;
}
main () {
	struct diemhocphan a,b;
	sinhvien(a);
	printf("diem hoc phan cua sinh vien : %0.2f \n",diemhocphansinhvien(a));
	sinhvien(b);
	printf("diem hoc phan cua sinh vien : %0.2f",diemhocphansinhvien(b));
}