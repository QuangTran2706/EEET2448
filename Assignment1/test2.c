#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    char phone_number[11];
    printf("Enter your phone number");
    scanf("%s", phone_number);
    if (phone_number[0] == '-') {
        //break;
        return 0;
    }
    unsigned int string_length = strlen(phone_number);
    if (string_length < 10) {
        printf("Invalid phone number. Your number is too short\n");
    } else if (string_length > 11) {
        printf("Invalid phone number. Your number is too long\n");
    } else if (phone_number[0] != '0') {
        printf("Invalid phone number. Invalid trunk code\n");
    } else if (string_length == 11 && phone_number[1] != '2') {
            printf("Invalid phone number. Invalid area code\n");
    } else if (string_length == 10) {
        char valid_mobile_code[50][2] = {"32", "33", "34", "35", "36", "37",
                                    "38", "39", "52", "56", "58", "59",
                                    "70", "76", "77", "78", "79", "81",
                                    "82", "83", "84", "85", "86", "87",
                                    "88", "89", "90", "91", "92", "93",
                                    "94", "95", "96", "97", "98", "99" };
        char a[2], b[2];
        a[0] = phone_number[1];
        b[0] = phone_number[2];
        strcat(a, b);
        for (int i = 0; i < sizeof(valid_mobile_code) / sizeof(valid_mobile_code[0]); i++) {
            unsigned short j = strcmp(a, valid_mobile_code[i]);
            if (j != 0) {
                printf("Invalid phone number. Invalid mobile code\n");
                break;
            }
        }
    } else printf("Your phone number is correct\n");
    return 0;
}
