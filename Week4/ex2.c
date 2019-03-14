#include <stdio.h>

int main(int argc, char const *argv[]) {
    unsigned long n;
    printf("enter the amount of number: ");
    scanf("%ld", &n);
    unsigned long array[n];
    for (int i = 0; i < n; i++) {
        printf("your number = ");
        scanf("%ld", &array[i]);
    }
    //print in reverse order
//     for (int i = n - 1; i >= 0; i--){
//         printf("%ld\n", array[i]);
//      }
    //print follow order
//      for (int i = 0; i < n; i++) {
//          printf("%ld\n", array[i]);
//      }
    for (int i = 0; i < n; i++) {
        int a = array[i] % 2;
        if (a == 1) {
            printf("%ld \n",array[i]);
        }
    }
    return 0;
}
