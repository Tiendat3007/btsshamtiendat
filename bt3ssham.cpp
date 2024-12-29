#include <stdio.h>
long long giaiThua(int n) {
    if (n < 0) {
        return -1; 
    }
    long long ketQua = 1;
    for (int i = 1; i <= n; i++) {
        ketQua *= i;
    }
    return ketQua;
}

int main() {
    int so;
    long long ketQua;
    printf("Nhap so nguyenn: ");
    scanf("%d", &so);
    ketQua = giaiThua(so);
     if (ketQua == -1) {
        printf("giao thua khong dc so am\n");
    } else {
        printf("Giai thua cua %d la: %lld\n", so, ketQua);
    }

    return 0;
}
