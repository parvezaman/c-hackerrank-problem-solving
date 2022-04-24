#include <stdio.h>
int main()
{
    int n, k, max_and = 0, max_or = 0, max_xor = 0;
    scanf("%d %d", &n, &k);

    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int ij_and = i & j;
            int ij_or = i | j;
            int ij_xor = i ^ j;
            if (ij_and < k && max_and < ij_and)
            {
                max_and = ij_and;
            }
            if (ij_or < k && ij_or > max_or)
            {
                max_or = ij_or;
            }
            if (ij_xor < k && ij_xor > max_xor)
            {
                max_xor = ij_xor;
            }
        }
    }
    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);

    return 0;
}