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

//function decleration
int value_of_roman_char(char ch);
int check_case_I(char s1, char s2);
int check_case_X(char s1, char s2);
int check_for_valid_roman(char *ptr);
int roman_to_decimal(char *p);

int main(int argc, char const *argv[])
{
    // open file
    FILE *fp1 = fopen("input.txt", "r");
    FILE *fp2 = fopen("output.txt", "w");
    char buffer[15];
    // check for if the file is open or not
    if (fp1 == NULL || fp2 == NULL) {
        printf("Cannot open the file \n");
        return -1;
    } else {
        // read the roman number from the file
        while (fgets(buffer, 15, fp1)) {
            // use function to convert roman number to decimal number
            int i = roman_to_decimal(buffer);
            int j = check_for_valid_roman(buffer);
            if (j == 0) {
               fprintf(fp2, "%s", "ERROR(wrong format)\n");
            } else {
            //print the decimal number to output file
            fprintf(fp2, "%d\n", i);
            }
        }
    }
    // close file
    fclose(fp1);
    fclose(fp2);
    return 0;
}

// function definition

// convert each value of romman character to its correspong decimal value
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
//check for valid roman number in the case the charater is 'I' 
int check_case_I(char s1, char s2) {
    int value_checking = 0;
        if (s1 == 'V' || s1 == 'X' || s1 == 'I')
        {
            value_checking = 1;
        }
        else
        {
            value_checking = 0;
        }
    return value_checking;
}
//check for valid roman number in the case the charater is 'X'
int check_case_X(char s1, char s2) {
    int value_checking = 0;
        if (s1 == 'D' || s1 == 'M' )
        {
            value_checking = 0;
        }
        else
        {
            value_checking = 1;
        }
    return value_checking;
}
// check for valid roman number return 1 if the value is right and 0 if the value is wrong
int check_for_valid_roman(char *ptr) {
    char s1, s2;
    int value_checking = 0;
    for (char *c = ptr; *c != '\0'; c++)
    {
        s1 = *c;
        if (s1 == 13 || s1 == '\0') {
            break; 
        }
        else if (s2 == 'I') {
            value_checking = check_case_I(s1, s2);
        } else if (s2 == 'X') {
            value_checking = check_case_X(s1, s2);
        } else {
            value_checking = 1;
        }
        s2 = s1;
    }
    return value_checking;
}
//converting the value of roman number to its corresponding decimal value
int roman_to_decimal(char *p) {
    int result = 0;
    //initializing the variables to store previous value of roman character
    int previous_value = 100000;
    for (char *c = p; *c != '\0'; c++) {
        if (*c == 13) break; 
        int current_value = value_of_roman_char(*c);
        // check for subtraction notation in roman numerals
        if (current_value > previous_value) {
            // calculate the current result in case of subtraction rule is applied
            result += (current_value - 2 * previous_value);
        }
        else {
            result += current_value; //calculate the current result
        }
        previous_value = current_value; // store the current roman character value to the variable
    }
    return result; // return the result to the function
}
