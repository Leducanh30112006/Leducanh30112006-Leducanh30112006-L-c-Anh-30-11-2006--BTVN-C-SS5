#include <stdio.h>

int main() {
    long long num;
    int tach;
    printf("Nhap mot so nguyen bat ky: ");
    scanf("%lld", &num);
    if (num < 0) {
        num = -num;
    }
    printf("Cac chu so trong so da nhap: ");
    do {
        tach = num % 10;
        printf("%d ", tach);
        num /= 10;
    } while (num > 0);
    printf("\n");
    return 0;
}

