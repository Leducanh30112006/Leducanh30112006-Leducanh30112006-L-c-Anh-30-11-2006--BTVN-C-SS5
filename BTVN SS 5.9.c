#include <stdio.h>

// Khai báo các bi?n toàn c?c d? luu tr? 3 s? nguyên
int num1, num2, num3;

// Hàm d? nh?p 3 s? nguyên
void nhap3So() {
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    printf("Nhap so thu ba: ");
    scanf("%d", &num3);
}

// Hàm d? tính t?ng 3 s?
void tong3So() {
    int sum = num1 + num2 + num3;
    printf("Tong 3 so la: %d\n", sum);
}

// Hàm d? tính trung bình c?ng 3 s?
void trungBinhCong3So() {
    float avg = (num1 + num2 + num3) / 3.0;
    printf("Trung binh cong 3 so la: %.2f\n", avg);
}

// Hàm d? tìm s? nh? nh?t
void soNhoNhat() {
    int min = num1;
    if (num2 < min) min = num2;
    if (num3 < min) min = num3;
    printf("So nho nhat la: %d\n", min);
}

// Hàm d? tìm s? l?n nh?t
void soLonNhat() {
    int max = num1;
    if (num2 > max) max = num2;
    if (num3 > max) max = num3;
    printf("So lon nhat la: %d\n", max);
}

int main() {
    int menu;

    do {
        printf("\nMENU\n");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &menu);
        switch (menu) {
            case 1:
                nhap3So();
                break;
            case 2:
                tong3So();
                break;
            case 3:
                trungBinhCong3So();
                break;
            case 4:
                soNhoNhat();
                break;
            case 5:
                soLonNhat();
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le.\n");
        }
    } while (menu != 6);

    return 0;
}

