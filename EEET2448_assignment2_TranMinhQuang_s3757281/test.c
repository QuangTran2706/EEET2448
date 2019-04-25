#include <stdio.h>

int value_of_roman_char (char ch);
void roman_to_decimal (char *p);

int main(int argc, char const *argv[]) {
    FILE *fp1 = fopen("input.txt", "r");
    FILE *fp2 = fopen ("output.txt", "w");
    char buffer[10];
    if (fp1 == NULL || fp2 == NULL) {
        printf("Cannot open the file \n");
        return -1;
    } else {
        fgets(buffer, 10, fp1);
        int i = roman_to_decimal(buffer);
        printf ("%d", i);
        }
    fclose(fp1);
    fclose(fp2);
    return 0;
}

int value_of_roman_char (char ch) {
    if (ch == 'I') {
        return 1;
    } else if (ch == 'V') {
        return 5;
    } else if (ch == 'X') {
        return 10;
    } else if (ch == 'L') {
        return 50;
    } else if (ch == 'C') {
        return 100;
    } else if (ch == 'D') {
        return 500;
    } else if (ch == 'M') {
        return 1000;
    } else
        return -1;
}

void roman_to_decimal (char *p) {
    char *ch = p;
    for (; *ch !='\0'; ch++) {
        printf("%c", *ch);
    }
}
