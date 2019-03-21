#include <stdio.h>
int main(int argc, char const *argv[]) {
    int arr[] = {12, 7, -3, 4, 1};
    int *p = arr;
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += *p;
        p++;
    }
    printf("sum = %d\n", sum);
    return 0;
}
