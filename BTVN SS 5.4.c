#include <stdio.h>

int main() {
    int n, i;
    do {
        printf("Nhap vao mot so nguyen duong tu 1 den 10: ");
        scanf("%d", &n);
    } while (n < 1 || n > 10);
    printf("Bang cuu chuong %d:\n", n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}
