#include <stdio.h>

int main() {
    int a, b, menu;
    float result;

    // Yêu c?u ngu?i dùng nh?p vào 2 s? b?t k?
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    do {
        // Hi?n th? menu
        printf("\nCALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &menu);
        switch (menu) {
            case 1:
                result = a + b;
                printf("Tong hai so la: %.2f\n", result);
                break;
            case 2:
                result = a - b;
                printf("Hieu hai so la: %.2f\n", result);
                break;
            case 3:
                result = a * b;
                printf("Tich hai so la: %.2f\n", result);
                break;
            case 4:
                if (b == 0) {
                    printf("Loi: Khong the chia cho 0.\n");
                } else {
                    result = (float)a / b;
                    printf("Thuong hai so la: %.2f\n", result);
                }
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (menu != 5);

    return 0;
}

