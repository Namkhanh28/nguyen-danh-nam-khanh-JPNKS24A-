#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Yêu cầu người dùng nhập vào 3 số nguyên
    printf("Nhập vào số thứ nhất: ");
    scanf("%d", &num1);
    printf("Nhập vào số thứ hai: ");
    scanf("%d", &num2);
    printf("Nhập vào số thứ ba: ");
    scanf("%d", &num3);

    // Kiểm tra xem số thứ 3 có nằm trong khoảng giữa số thứ nhất và số thứ hai không
    if ((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1)) {
        printf("Số %d nằm trong khoảng giữa %d và %d.\n", num3, num1, num2);
    } else {
        printf("Số %d không nằm trong khoảng giữa %d và %d.\n", num3, num1, num2);
    }

    return 0;
}
