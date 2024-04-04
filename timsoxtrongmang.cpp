#include <stdio.h>

int timso(int a[], int x) {
    int b = -1; // Khởi tạo giá trị mặc định cho b
    for (int i = 0; i < x; i++) {
        if (i == x) {
            b = a[i];
            break; // Thêm câu lệnh break để kết thúc vòng lặp khi tìm thấy số x
        }
    }
    return b;
}

int main() {
    int a[20], n, i;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Nhap gia tri cua mang a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    int b = timso(a, n);
    if (b != -1) {
        printf("So can tim trong mang: %d\n", b);
    } else {
        printf("Khong tim thay so trong mang.\n");
    }
    return 0;
}