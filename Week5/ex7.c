#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    char string[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", string);
    char *q = string;
    for (int i = strlen(string); i >= 0; i--) {
        printf("%c",*(string + i));
    }
    printf("\n");
    return 0;
}
