#include <stdio.h>

int main(void)
{
    int upper_bound = 1000;
    int summation = 0;

    for (int i = 0; i < upper_bound; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            summation += i;
        }
    }

    printf("%i", summation);
}