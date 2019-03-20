#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    // char phone_number[11];
    // printf("Enter your phone number");
    // scanf("%s", phone_number);
    //     char valid_mobile_code[] = {32, 33, 34, 35, 36, 37,
    //                                 38, 39, 52, 56, 58, 59,
    //                                 70, 76, 77, 78, 79, 81,
    //                                 82, 83, 84, 85, 86, 87,
    //                                 88, 89, 90, 91, 92, 93,
    //                                 94, 95, 96, 97, 98, 99 };
        // char mobile_code = strcat('3', '4');
        char a, b;
        a = 4;
        b = 3;
        strcat(a, b);
        printf("%s\n", a);
        // for (int i = 0, i < sizeof(valid_mobile_code) / sizeof(valid_mobile_code[0]); i++) {
        //     unsigned short j = strcmp (mobile_code, valid_mobile_code);
        //     if (j != 0) {
        //         printf("Invalid phone number. Invalid mobile code\n");
        //         break;
        //     }
        // }
    return 0;
}
