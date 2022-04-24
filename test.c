#include <stdio.h>
int main()
{
    int sum = 0;
    while (sum <= 20)
    {
        printf("%d\n", sum);
        if (sum < 10)
            continue;
        sum += 2;
    }
}

/*
A   B Remainder
30  42  12
12  30  6
6   12  0
0   6
*/