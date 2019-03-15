#include <stdio.h>
#include <math.h>

void main() {
    unsigned long n;
    printf("enter the amount of number: ");
    scanf("%ld", &n);
    unsigned long array[n];
        //scan the number of the string
    for (int i = 0; i < n; i++) {
        printf("your number = ");
        scanf("%ld", &array[i]);
    }
        //print in reverse order
    // for (int i = n - 1; i >= 0; i--){
    //     printf("%ld\n", array[i]);
    //  }
        //print follow order
    // for (int i = 0; i < n; i++) {
    //      printf("%ld\n", array[i]);
    //  }
        //print odd number only
    // for (int i = 0; i < n; i++) {
    //     int a = array[i] % 2;
    //     if (a == 1) {
    //         printf("%ld \n",array[i]);
    //     }
    // }
        //print the input bigger than 5

        //find mean
    // float sum = 0, mean;
    // for (int i = 0; i < n; i++) {
    //     sum += array[i];
    // }
    // mean = sum / n;
    // printf("%f\n", mean);
        //find deviation
    // float deviation, sum2 = 0;
    // for (int i = 0; i < n; i++) {
    //     int a = (array[i] - mean) * (array[i] - mean) ;
    //     sum2 = a + sum2;
    // }
    // deviation = sqrt(sum2 / (n - 1));
    // printf("%f\n", deviation);
}
