#include <stdio.h>
#include <time.h>

int main(void) {
    double dtime = 0.0;
    int upper_bound = 1000;
    int summation = 0;

    clock_t begin = clock();

    for (int i = 0; i < upper_bound; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            summation += i;
        }
    }

    clock_t end = clock();
    dtime +=  (double) (end - begin) / CLOCKS_PER_SEC;

    printf("%i \nTime Spent: %f seconds", summation, dtime);
}