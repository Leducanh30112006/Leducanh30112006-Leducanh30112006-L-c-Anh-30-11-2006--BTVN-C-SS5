#include <stdio.h>

int main() {
    int n, i, tong = 0;
    printf("Nhap vao mot so nguyen duong n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Vui long nhap so nguyen duong.\n");
    } else {
        for (i = 1; i <= n; i++) {
            tong += i;
        }
        printf("Tong cac so tu 1 den %d la: %d\n", n, tong);
    }
    return 0;
}
