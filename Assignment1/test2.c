/*
  RMIT University Vietnam
  Course: EEET2448 Computing Engineering
  Semester: 2019A
  Assessment: Assignment 1
  Author: Tran Minh Quang
  ID: s3757281
  Created date: 19/3/2019
 Acknowledgement: If you use any resources, acknowledge here. Failure to do so will be considered as plagiarism.
*/
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    while (1) {
        char phone_number[11];
        printf("Enter your phone number:");
        scanf("%s", phone_number);
        if (phone_number[0] == '-') {
            printf("program exit\n");
            return 0;
        }
        unsigned int string_length = strlen(phone_number);
        if (string_length < 10) {
            printf("Invalid phone number. Your number is too short\n");
            continue;
        } else if (string_length > 11) {
            printf("Invalid phone number. Your number is too long\n");
            continue;
        } else if (phone_number[0] != '0') {
            printf("Invalid phone number. Invalid trunk code\n");
            continue;
        } else if (string_length == 11 && phone_number[1] != '2') {
            printf("Invalid phone number. Invalid area code\n");
            continue;
        } else if (string_length == 10) {
            int in = 0;
            char valid_mobile_code[36][2] = {"32", "33", "34", "35", "36", "37",
                                             "38", "39", "52", "56", "58", "59",
                                             "70", "76", "77", "78", "79", "81",
                                             "82", "83", "84", "85", "86", "87",
                                             "88", "89", "90", "91", "92", "93",
                                             "94", "95", "96", "97", "98", "99"};
            int n = sizeof(valid_mobile_code) / sizeof(valid_mobile_code[0]);
            for (int i = 0; i < n; i++) {
                if (phone_number[1] == valid_mobile_code[i][0] &&
                    phone_number[2] == valid_mobile_code[i][1]) {
                    in = 1;
                    break;
                }
            }
            if (in == 0) {
                printf("Invalid phone number. Invalid mobile code\n");
                continue;
            }
        }
        printf("Your phone number is correct\n");
    }
    return 0;
}
