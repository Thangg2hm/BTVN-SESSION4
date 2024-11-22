#include <stdio.h>

int main() {
    int number;


    printf("nhap vao mot so nguyen: ");
    scanf("%d", &number);


    if (number > 0) {
        printf("so %d là so duong.\n", number);
    } else if (number < 0) {
        printf("so %d là so am.\n", number);
    } else {
        printf("so %d la so khong.\n", number);
    }

    return 0;
}

