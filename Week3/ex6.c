#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
    double timez = clock();
    unsigned long n, low, up;
    printf("Enter number:");
    scanf("%ld %ld %ld",&n, &low, &up);
    srand(time(NULL));
    for (int i = 0; i < n; i++){
        unsigned long j = rand();
        if (j > low && j < up){
            printf("%ld ",j);
        } else
        printf("el%ld  ",low + i +1);
    }
    printf("%f\n", clock() - timez);
    return 0;
}
