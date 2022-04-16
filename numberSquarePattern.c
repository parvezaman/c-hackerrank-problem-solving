#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, size, start, end;
    scanf("%d", &n);
    // Complete the code to print the pattern.
    size = (2 * n) - 1;
    start = 0;
    end = size - 1;
    int a[size][size];

    while (n != 0)
    {
        for (int i = start; i <= end; i++)
        {
            for (int j = start; j <= end; j++)
            {
                if (i == start || i == end || j == start || j == end)
                {
                    a[i][j] = n;
                }
            }
        }
        ++start;
        --end;
        --n;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}