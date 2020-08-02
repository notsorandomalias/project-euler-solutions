#include <stdio.h>
#include <time.h>

long long largest_prime_factor(long long n);

int main(void) {
    double dt = 0.0; 
    clock_t start = clock();

    long long n = 600851475143;
    long long prime_factor = largest_prime_factor(n);

    clock_t end = clock();
    dt = (double) (end - start) / CLOCKS_PER_SEC;

    printf("%i \nTime Elapsed: %f seconds", prime_factor, dt);
}

long long largest_prime_factor(long long n) {
    long long prime = 1;
    long long i = 2;

    while (i <= n / i) {
        if (n % i == 0) {
            prime = i;
            n /= i;
        } else {
            i += 1;
        }
    }

    if (prime < n) {
        prime = n;
    }

    return prime;
}