#include <stdio.h>

int main () {
    int i = 0;
    int total = 0;

    for (i = 0; i < 1000; i++) {
        if ((i % 3 || i % 5) && i % 15 != 0) total += i;
    }

    printf ("Sum of all multiples of 3 or 5 below 1000: %d\n", total);
}