#include <stdio.h>
#include <math.h>

struct diem {
    float a[100];
    float b[100];
    int n;
};

void nhap(struct diem &k) {
    printf("nhap so diem cua toa do a va b: \n");
    scanf("%d", &k.n);
    printf("nhap toa do diem cua a: \n");
    for (int i = 0; i < k.n; i++) {
        printf("diem toa do thu %d: \n", i);
        scanf("%f", &k.a[i]);
    }
    printf("nhap toa do diem cua b: \n");
    for (int i = 0; i < k.n; i++) {
        printf("diem toa do thu %d: \n", i);
        scanf("%f", &k.b[i]);
    }
}

float dodai(struct diem k) {
    float t, m = 0;
    for (int i = 0; i < k.n; i++) {
        t = pow((k.a[i] - k.b[i]), 2);
        m += t;
    }
    return sqrt(m);
}

int main() {
    struct diem s;
    nhap(s);
    printf("do dai cua 2 diem toa do la: %0.2f", dodai(s));
    return 0;
}