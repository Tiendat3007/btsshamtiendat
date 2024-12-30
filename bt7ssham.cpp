#include <stdio.h>
void tao_arr(int so_hang, int so_cot, int arr[100][100]) {
    printf("Nhap cac gia trij cho mang:\n");
    for (int i = 0; i < so_hang; i++) {
        for (int j = 0; j < so_cot; j++) {
            printf("Nhhap gia tri cua phan tu [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}
void in_arr(int so_hang, int so_cot, int arr[100][100]) {
    printf(":\n");
    for (int i = 0; i < so_hang; i++) {
        for (int j = 0; j < so_cot; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int so_hang, so_cot;
    int arr[100][100];
    printf("nhap so hang cua mang: ");
    scanf("%d", &so_hang);
    printf("Nhap so cot cua mang: ");
    scanf("%d", &so_cot);

    if (so_hang <= 0 || so_hang > 100 || so_cot <= 0 || so_cot > 100) {
        printf("so hang va so cot phai nam trong khoang tu 1 den 100.\n");
        return 1;
    }
    tao_arr(so_hang, so_cot, arr);
    in_arr(so_hang, so_cot, arr);

    return 0;
}

