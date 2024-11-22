#include <stdio.h>

int main() {
    int num1, num2, num3;

    
    printf("NHAP SO THU NHAT: ");
    scanf("%d", &num1);
    printf("NHAP SO THU HAI: ");
    scanf("%d", &num2);
    printf("NHAP SO THU BA: ");
    scanf("%d", &num3);

    
    if ((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1)) {
        printf("so thu ba (%d) nam trong khoang giua so thu nhat (%d) va so thu hai (%d).\n", num3, num1, num2);
    } else {
        printf("so thu ba (%d) khong nam trong khoang giua so thu nhat(%d) va so thu hai (%d).\n", num3, num1, num2);
    }

    return 0;
}

