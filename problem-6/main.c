#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int sum_of_squares(int n, int total);
long square_of_sum(int n, int sum);

int main(int argc, char *argv[]) {
    double dt = 0.0;
    clock_t start = clock();
    int n = atoi(argv[1]);

    if (argc != 2 || n < 1) {
        printf("Invalid parameter");
        return 1;
    }

    int sum_sq = sum_of_squares(n, 0);
    long sq_sum = square_of_sum(n, 0);

    clock_t end = clock();
    dt += (double) (end - start) / CLOCKS_PER_SEC; 
    printf("%i \nTime Elapsed: %0.3f seconds", sq_sum - sum_sq, dt);
}

int sum_of_squares(int n, int total) {    
    if (n == 0) {
        return total;
    } else {
        total += pow(n, 2);
        return sum_of_squares(n - 1, total);
    }
}

long square_of_sum(int n, int sum) {
    if (n == 0) {
        return pow(sum, 2);
    } else {
        sum += n;
        return square_of_sum(n - 1, sum);
    }
}