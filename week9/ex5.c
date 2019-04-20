#include <stdio.h>

int main(int argc, char const *argv[]) {
    FILE *fp;
    char ch;
    int linecount, wordcount, charcount;

    linecount = 0;
    wordcount = 0;
    charcount = 0;

    fp = fopen(argv[1],"r");

    if ( fp ) {
        while ((ch=getc(fp)) != EOF) {
            if (ch != ' ' && ch != '\n') {
                charcount++;
            }
            if (ch == ' ' || ch == '\n') {
                wordcount++;
            }
            if (ch == '\n') { 
                linecount++;
            }
        }

        if (charcount > 0) {
            linecount++;
            wordcount++;
        }
    } else {
        printf("cannot open the file\n");
    }

    printf("Lines : %d \n", linecount);
    printf("Words : %d \n", wordcount);
    printf("Characters : %d \n", charcount);

return(0);
}
