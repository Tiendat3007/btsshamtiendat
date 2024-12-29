#include <stdio.h>
int timSoLonNhat(int mang[], int kichThuoc) {
    int max = mang[0];
    for (int i = 1; i < kichThuoc; i++) {
        if (mang[i] > max) {
            max = mang[i];
        }
    }
    return max;
}

int main() {
    int mang[] = {3, 11, 17, 9, 22, 5};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);
    int soLonNhat = timSoLonNhat(mang, kichThuoc);
    printf("so lon nhat trong mang la: %d\n", soLonNhat);

    return 0;
}

