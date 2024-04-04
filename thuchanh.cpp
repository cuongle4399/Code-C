#include <stdio.h>
#include <math.h>

void nhapv(int v[], int& n) {
    printf("Nhap so chieu vecto: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap toa do thu %d: ", i + 1);
        scanf("%d", &v[i]);
    }
}

float module(int v[], int n) {
    int b = 0;
    for (int i = 0; i < n; i++) {
        b += pow(v[i], 2);
    }
    return sqrt(b);
}

void nhapu(int u[], int& n) {
    printf("Nhap so chieu vecto: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap toa do thu %d: ", i + 1);
        scanf("%d", &u[i]);
    }
}

void vectow(int v[], int u[], int w[], int n) {
    for (int i = 0; i < n; i++) {
        w[i] = v[i] + u[i];
    }
    printf("Vecto w tong 2 vecto v va u la: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", w[i]);
    }
    printf("\n");
}

void ghivecto(int v[], int n) {
    FILE* f;
    f = fopen("vecto.txt", "w");
    fprintf(f, "%d\n", n);
    for (int i = 0; i < n; i++) {
        fprintf(f, "%d ", v[i]);
    }
    fclose(f);
}

void tongtoado(int v[], int n) {
    FILE* f;
    int k = 0;
    f = fopen("vecto.txt", "r");
    fscanf(f, "%d", &n);
    for (int i = 0; i < n; i++) {
        fscanf(f, "%d", &v[i]);
        k += v[i];
    }
    printf("Tong vecto v la: %d\n", k);
    fclose(f);
}

main() {
    int v[100];
    int n;
    int u[100];
    int w[100];

    nhapv(v, n);
    ghivecto(v, n);
    printf("Do dai cua vecto la: %f\n", module(v, n));
    nhapu(u, n);
    vectow(v, u, w, n);
    tongtoado(v, n);
}