#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        int last_digit = n % 10;
        printf("The last digit of %d is %d\n", n, last_digit);
        return (0);
}
