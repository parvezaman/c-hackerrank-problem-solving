#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sumCal(int n)
{
    int sum;
    while (n > 0)
    {
        int mod = n % 10;
        // printf("%d\n", mod);
        n /= 10;
        sum += mod;
    }
    printf("%d", sum);
}

int main()
{

    int n;
    scanf("%d", &n);
    // Complete the code to calculate the sum of the five digits on n.+

    sumCal(n);

    return 0;
}