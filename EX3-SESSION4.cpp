#include <stdio.h>

int main() {
    int number;

    printf("nhap vao mot so nguyen:");
    scanf("%d", &number);

   
    if (number % 3 == 0 && number % 5 == 0) {
        printf("so %d chia het cho ca 3 va 5.\n", number);
    } else if (number % 3 == 0) {
        printf("so %d chia het cho 3.\n", number);
    } else if (number % 5 == 0) {
        printf("so %d chia het cho 5.\n", number);
    } else {
        printf("so %d khong chia het cho 3 hoac 5.\n", number);
    }

    return 0;
}

