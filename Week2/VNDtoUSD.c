#include <stdio.h>
int main(int argc, char const *argv[]) {
    //Input amount of VND
    float VND;
    printf("Please enter amount of VND " );
    scanf("%f",&VND );

    //convert the amount of VND to USD and show it to the screen
    float USD = VND/23201;
    printf("The amount of USD is %f \n", USD);

    return 0;
}
