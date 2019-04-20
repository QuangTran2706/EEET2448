#include <stdio.h>

int main(int argc, char const *argv[]) {

    FILE *p, *q ;
    p = fopen(argv[1], "w");
    if (p == NULL) {
        printf("Cannot open the file \n");
        return -1;
    } else {
        fprintf(p, "%s", "hello" );
    }
    fclose(p);

    char c[100];
    q = fopen (argv[1], "r");
    fscanf(q, "%s", c);
    printf("%s\n", c);
    fclose(q);
    return 0;
}
