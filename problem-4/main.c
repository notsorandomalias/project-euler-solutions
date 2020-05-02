#include <stdio.h>
#include <time.h>

long reverse(long n);

int main(void) {
    double dt = 0.0;
    clock_t start = clock();
    long largest_palindrome = 0;

    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            long n = (long) i * j;
            long reversed = reverse(n);

            if (n == reversed && largest_palindrome < n) {
                largest_palindrome = n;
            }
        }
    }

    clock_t end = clock();
    dt += (double) (end - start) / CLOCKS_PER_SEC; 
    printf("%i \nTime Elapsed: %0.3f", largest_palindrome, dt);
}

long reverse(long n) {
    long r = 0;

    while (n != 0) {
        r *= 10;
        r += n % 10;
        n /= 10;
    }

    return r;
}