#include <stdio.h>

int main(int argc, char const *argv[]) {
    char string[100];
    char *p = string;
    const int DIFF = 'a' - 'A';

    printf("Enter a string: ");
    scanf("%[^\n]s", string);

    for (; *p != '\0'; p++) {
        if (*p >= 'a' && *p <= 'z') {
            *p = *p - DIFF;
        }
    }

    printf("%s\n", string);
    return 0;
}
