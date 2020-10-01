#include <stdio.h>

int main () {
    int i;
    int sum_squares;
    int square_sum;

    for (i = 0; i < 100; i++) {
        sum_squares += (i * i);
    }

    for (i = 0; i < 100; i++) {
        square_sum += i;
    }

    square_sum = square_sum * square_sum;

    int difference = sum_squares - square_sum;
    printf ("Difference: %d\n", difference);

    return 0;
}

