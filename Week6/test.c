#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    fp = fopen("one.txt", "w");
    printf("Enter data...");
    while ((ch = getchar()) != EOF)
    {
        putc(ch, fp);
    }
    fclose(fp);
    fp = fopen("one.txt", "r");

    while( (ch = getc(fp)!= EOF) {
    printf("%c", ch);
    }
    // closing the file pointer
    fclose(fp);
    
    return 0;
}