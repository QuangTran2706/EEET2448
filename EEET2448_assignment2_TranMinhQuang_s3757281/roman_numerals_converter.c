/*
  RMIT University Vietnam
  Course: EEET2448 Computing Engineering
  Semester: 2019A
  Assessment: Assignment 2
  Author: Tran Minh Quang
  ID: s3757281
  Created date: 24/4/2019
  Acknowledgement: If you use any resources, acknowledge here. Failure to do so will be considered as plagiarism.
*/

#include <stdio.h>

int value_of_roman_char(char ch);
int roman_to_decimal(char *p);


int main(int argc, char const *argv[]) {
    FILE *fp1 = fopen("input.txt", "r");
    FILE *fp2 = fopen("output.txt", "w");
    char buffer[15];

    if (fp1 == NULL || fp2 == NULL) {
        printf("Cannot open the file \n");
        return -1;
    }
    else {
        while (fgets(buffer, 15, fp1)) {
            printf("%s", buffer);
            int i = roman_to_decimal(buffer);
            printf("final : %d\n", i);
        }
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}

int value_of_roman_char(char ch) {
    if (ch == 'I')
    {
        return 1;
    }
    else if (ch == 'V')
    {
        return 5;
    }
    else if (ch == 'X')
    {
        return 10;
    }
    else if (ch == 'L')
    {
        return 50;
    }
    else if (ch == 'C')
    {
        return 100;
    }
    else if (ch == 'D')
    {
        return 500;
    }
    else if (ch == 'M')
    {
        return 1000;
    }
    else
        return -1;
}

int roman_to_decimal(char *p)
{
    int result = 0;
    int previous_value = 100000; //explain more

    for (char *c = p; *c != '\0'; c++) {
        if (*c == 13) break; //explain more
        printf("char: %d\n", *c);
        int current_value = value_of_roman_char(*c);
        printf("current value: %d\n", current_value);
        printf("pre_value 1: %d\n", previous_value);
        if (current_value > previous_value) {
            result += (current_value - 2 * previous_value);
            printf("result 1: %d\n", result);
        } else {
            result += current_value;
            printf("result 2: %d\n", result);
        }
        previous_value = current_value;
        printf("pre_value: %d\n", previous_value);
    }
    return result;
}
