#include <stdio.h>
void inMang(int mang[], int kichThuoc) {
    printf("cac phan tu trong mang la:\n");
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");
}

int main() {
    int mang[] = {1, 2, 3, 4, 5};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);
    inMang(mang, kichThuoc);

    return 0;
}

