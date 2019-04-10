#include <stdio.h>

int digit_sum (int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}

int main(int argc, char const *argv[]) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of digits: %d\n", digit_sum(n));
    return 0;
}
