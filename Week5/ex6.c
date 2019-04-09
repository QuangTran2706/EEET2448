#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    char string[100];
    char *q = string;
    int string_length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", string);

    while (*q != '\0') {
        string_length++;
        q++;
    }

    printf("The length of the string: %d\n",string_length);
    return 0;
}
