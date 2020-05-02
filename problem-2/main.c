#include <stdio.h>
#include <time.h>

int fibonacci(int n);

int main(void) {
    double dtime = 0.0;
    int n = 3;
    int summation = 0;

    clock_t begin = clock();

    while (fibonacci(n) < 4000000) {
        int value = fibonacci(n);

        if (value % 2 == 0) {
            summation += value;
        }
        n += 3;
    }

    clock_t end = clock();
    dtime += (double) (end - begin) / CLOCKS_PER_SEC;

    printf("%i \nTime Spent: %f seconds", summation, dtime);
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}