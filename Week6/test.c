#include <stdio.h>

int main(void) {
       int x, y = 2, z, a;
       x = (y *= 2) + (z = a = y);
       printf("%d\n", x);
}