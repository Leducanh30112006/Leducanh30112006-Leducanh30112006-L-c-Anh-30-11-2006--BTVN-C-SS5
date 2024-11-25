#include <stdio.h>

int main() {
    int num = 69; 
    int nhap;
    do {
        printf("Nhap mot so nguyen: ");
        scanf("%d", &nhap);
        if (nhap != num) {
            printf("Sai roi\n");
        }
    } while (nhap != num);
    printf("Dung roi\n");
    return 0;
}

