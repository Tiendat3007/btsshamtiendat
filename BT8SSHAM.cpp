#include <stdio.h>
int UCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return (a > 0) ? a : -a;
}

int main() {
    int so_1, so_2;
    printf("NHAP SO THU NHAT: ");
    scanf("%d", &so_1);
    printf("NHAP SO THU HAI: ");
    scanf("%d", &so_2);
    int ket_qua = UCLN(so_1, so_2);
    printf("UOC CHUNG LON NHAT CUA %d VA %d LA: %d\n", so_1, so_2, ket_qua);
    return 0;
}

