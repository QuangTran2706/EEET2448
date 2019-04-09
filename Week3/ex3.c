#include <stdio.h>
int main(int argc, char const *argv[]) {
    double a;
    double b;
    double c;
    printf("enter 3 number:\n");
    scanf("%lf%lf%lf", &a,&b,&c );
    double max = (a>b)? a : b;
    max = (max>c)? max :c;
    printf("maximum number %0.3lf\n",max );
    return 0;
}
