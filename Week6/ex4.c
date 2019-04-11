#include <stdio.h>
void swap_int (int *num1, int *num2) {
    int i = 0;
    i = *num2;
    *num2 = *num1;
    *num1 = i;
}

int main(int argc, char const *argv[]) {
    int x,y;
    printf("Enter the first number:");
    scanf("%d", &x);
    printf("Enter the second number:");
    scanf("%d", &y);
    swap_int(&x, &y);
    printf("number 1: %d\n", x);
    printf("number 2: %d\n", y);
    return 0;
}
