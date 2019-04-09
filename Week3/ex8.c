#include <stdio.h>
int main(int argc, char const *argv[]) {
    for (int i = 1; i<= 11; i++){
        if (i==1){
            printf ("x\t");
        } else
        printf("%d\t",i-1 );
    }
    printf("\n");
    for (int i = 1; i <= 10; i++ ){
            printf("%d\t", i);
        for (int j = 1; j <= 10; j++){
            printf ("%d\t", i * j);
        }
        printf("\n" );
    }
    return 0;
}
