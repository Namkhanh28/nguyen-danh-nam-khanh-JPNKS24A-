#include <stdio.h>

int main() {
    int month;

    // Yêu cầu người dùng nhập vào số tháng
    printf("Nhập vào số tháng (1-12): ");
    scanf("%d", &month);

    // Kiểm tra số tháng và in ra số ngày tương ứng hoặc thông báo không hợp lệ
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Tháng %d có 31 ngày.", month);
            break;
        case 4: case 6: case 9: case 11:
            printf("Tháng %d có 30 ngày.\n", month);
            break;
        case 2:
            printf("Tháng %d có 28 hoặc 29 ngày.\n", month);
            break;
        default:
            printf("Số tháng không hợp lệ.\n");
    }

    return 0;
}
