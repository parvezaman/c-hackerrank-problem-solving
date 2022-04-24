#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.

int find_nth_term(int n, int a, int b, int c)
{
    // Write your code here.
    int difference = b - a;
    int sum = 0;
    for (int i = a; i <= n; i += difference)
    {
        return sum += i;
    }
}

int main()
{
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;

    return 0;
}