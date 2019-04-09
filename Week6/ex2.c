#include <stdio.h>

int mystrlen(char *p) {
    int count = 0;
    for (; *p != '\0'; p++) {
        count++;
    }
    return count;
}

char *mytoupper (char *q) {
    const int DIFF = 'a' - 'A';
    for (char *p = q; *p != '\0'; p++) {
        if (*p >= 'a' && *p <= 'z') {
            *p = *p - DIFF;
        }
    }
    return q;
}

int main(int argc, char const *argv[]) {
    char arr[100];
    char *p = arr;
    printf("Enter your string:\n");
    scanf("%[^\n]", arr);
    printf("your string length: %d\n", mystrlen(p));
    printf("your string with upper case: %s\n", mytoupper(p));
    return 0;
}
