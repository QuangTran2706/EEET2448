#include <stdio.h>
int main(int argc, char const *argv[]) {
// int f0 = 0;
// int f1 = 1;
// int f;
unsigned long fibonacci[50], count = 2;
fibonacci[0] = 0;
fibonacci[1] = 1;
printf("%d %d ", fibonacci[0], fibonacci[1]);
for (int i = 2; i < 50; i++){
    fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    count++;
    if (count == 10) {
        count = 0;
        printf("\n");
    }
    printf("%ld ",fibonacci[i]);
}
    return 0;
}
