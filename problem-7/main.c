#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[]) {
    double dt = 0;
    clock_t start = clock();
    
    int n = atoi(argv[1]);
    int counter = 0;
    int prime = 1;

    while (counter <= n) {
        int is_prime = 1;
        prime++;

        for (int i = 2; i < sqrt(prime); i++) {
            if (prime % i == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime == 1) {
            counter++;
        }
    }

    clock_t end = clock();
    dt += (double) (end - start) / CLOCKS_PER_SEC; 
    printf("%i \nTime Elapsed: %0.3f seconds", prime, dt);
}