#include <stdio.h>
#include <time.h>

int main(void) {
    double dt = 0.0;
    clock_t start = clock();
    int n = 20;

    while (1) {
        int flag = 0;

        for (int i = 1; i <= 20; i++) {
            if (n % i != 0) {
                flag = 1;
                break;
            }
        }

        if (!flag) {
            break;
        } else {
            n += 2;
        }
    }

    clock_t end = clock();
    dt += (double) (end - start) / CLOCKS_PER_SEC; 
    printf("%i \nTime Elapsed: %0.3f seconds", n, dt);
}