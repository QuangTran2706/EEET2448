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
int check_for_valid_roman(char *ptr);
int roman_to_decimal(char *p);

int main(int argc, char const *argv[])
{
    FILE *fp1 = fopen("input.txt", "r");
    FILE *fp2 = fopen("output.txt", "w");
    char buffer[15];

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Cannot open the file \n");
        return -1;
    }
    else
    {
        while (fgets(buffer, 15, fp1))
        {
            printf("%s\n", buffer);
            int i = roman_to_decimal(buffer);
            printf("final : %d\n", i);
        }
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}

int value_of_roman_char(char ch)
{
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

int check_for_valid_roman(char *ptr)
{
    char s1, s2;
    int value_checking = 0;
    printf("%s\n", ptr);
    for (char *c = ptr; *c != '\0'; c++)
    {
        printf("%s\n", c);
        s1 = *c;
        // printf("s1: %c\n",s1);
        // printf("first s2: %c\n", s2);
        if (s1 == '\0')
        {
            break;
        }
        else if (s2 == 'I')
        {
            // printf("into case I\n");
            if (s1 == 'V' || s1 == 'X' || s1 == 'I')
            {
                value_checking = 1;
                // break;
            }
            else
            {
                value_checking = 0;
                return value_checking;
            }
        }
        else if (s2 == 'X')
        {
            // printf("into case X\n");
            if (s1 == 'L' || s1 == 'C' || s1 == 'X')
            {
                value_checking = 1;
                // break;
            }
            else
            {
                value_checking = 0;
                return value_checking;
            }
        }
        else if (s2 == 'C')
        {
            // printf("into case C\n");
            if (s1 == 'D' || s1 == 'M' || s1 == 'C')
            {
                value_checking = 1;
                // break;
            }
            else
            {
                value_checking = 0;
                return value_checking;
            }
        }
        else
        {
            // printf("into default cases\n");
            value_checking = 1;
            // break;
        }
        printf("value checking: %d\n", value_checking);
        s2 = s1;
        // printf("second s2: %c\n", s2);
    }
    return value_checking;
}

int roman_to_decimal(char *p)
{
    int result = 0;
    int previous_value = 100000; //explain more

    for (char *c = p; *c != '\0'; c++)
    {
        if (*c == 13)
            break; //explain more
        printf("char: %c\n", *c);
        int current_value = value_of_roman_char(*c);
        // printf("current value: %d\n", current_value);
        // printf("pre_value 1: %d\n", previous_value);
        if (current_value > previous_value)
        {
            int j = check_for_valid_roman(p);
            printf("check result: %d\n", j);
            result += (current_value - 2 * previous_value);
            // printf("result 1: %d\n", result);
        }
        else
        {
            result += current_value;
            // printf("result 2: %d\n", result);
        }
        previous_value = current_value;
        // printf("pre_value: %d\n", previous_value);
    }
    return result;
}
