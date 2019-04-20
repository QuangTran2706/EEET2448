#include <stdio.h>

int filecopy(char const *infilename, char const *outfilename);

int main(int argc, char const *argv[]) {
    char inname[100];
    char outname[100];
    char *file1 = inname;
    char *file2 = outname;

    printf("Enter your first file name: \n");
    scanf("%s", file1);
    printf("Enter your seconf file name: \n");
    scanf("%s", file2);
    filecopy(file1, file2);
    printf("Your file have been copied\n");

    return 1;
}

 int filecopy(char const *infilename, char const *outfilename) {
    FILE *fp1 = fopen(infilename, "w");;
    FILE *fp2 = fopen (outfilename, "w");;
    char c;
    char file_content[100];

    if (fp1 == NULL || fp2 == NULL) {
        printf("Cannot open the file \n");
        return 0;
    } else {
        printf("Enter file content:\n");
        scanf("%s", file_content);
        fprintf(fp1, "%s", file_content);

        c = fgetc(fp1);
        while (c != EOF) {
            fputc(c, fp2);
            c = fgetc(fp1);
        }
    }
    fclose(fp1);
    fclose(fp2);
}
