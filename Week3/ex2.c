#include <stdio.h>
int main(int argc, char const *argv[]) {
    float FinalResult ;
    printf("What is your final result:\n");
    scanf("%f", &FinalResult );
    if (0<FinalResult&&FinalResult<50){
        printf("Your result is NN\n" );
    } else if (50<FinalResult&&FinalResult<60){
        printf("your result is PA\n" );
    } else if (60<FinalResult&&FinalResult<70){
        printf("your result is CR\n" );
    } else if (70<FinalResult&&FinalResult<80){
        printf("your result is DI\n" );
    } else if (80<FinalResult&&FinalResult<100){
        printf("your result is HD\n" );
    } else printf("invalid value\n");
    return 0;
}
