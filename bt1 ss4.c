#include <stdio.h>

int main() {
    int number;

    // Yêu cầu người dùng nhập vào một số nguyên
    printf("Nhập vào một số nguyên: ");
    scanf("%d", &number);

    // Kiểm tra và in ra kết quả
    if (number > 0) {
        printf("Số %d là số dương.\n", number);
    } else if (number < 0) {
        printf("Số %d là số âm.\n", number);
    } else {
        printf("Số %d là số không.\n", number);
    }

    return 0;
}
