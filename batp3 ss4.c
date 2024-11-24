#include <stdio.h>

int main() {
    int number;

    // Yêu cầu người dùng nhập vào một số nguyên
    printf("Nhập vào một số nguyên: ");
    scanf("%d", &number);

    // Kiểm tra và in ra kết quả tương ứng
    if (number % 3 == 0 && number % 5 == 0) {
        printf("Số %d chia hết cho cả 3 và 5.\n", number);
    } else if (number % 3 == 0) {
        printf("Số %d chia hết cho 3.\n", number);
    } else if (number % 5 == 0) {
        printf("Số %d chia hết cho 5.\n", number);
    } else {
        printf("Số %d không chia hết cho 3 và 5.\n", number);
    }

    return 0;
}
