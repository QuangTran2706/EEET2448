#include <stdio.h>
int main(int argc, char const *argv[]) {
    int a, b, c;

    printf("%s%p\n%s%p\n%s%p\n",
                    "&a = ", &a,
                    "&b = ", &b,
                    "&c = ", &c );
    return 0;
}
