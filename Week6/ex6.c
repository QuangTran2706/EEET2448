#include <stdio.h>

void decimal_to_binary (int number) {
    int binumber[20];
    int i = 0;

    while (number > 0) {
        binumber[i] = number % 2;
        number = number / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binumber[j]);
    }
}

int main(int argc, char const *argv[]) {
    int number;

    printf("Enter your positive number: ");
    scanf("%d", &number);
    decimal_to_binary(number);
    printf("\n");
    return 0;
}
