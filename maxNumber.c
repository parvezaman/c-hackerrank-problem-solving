#include <stdio.h>

/* int max_of_four(int a, int b, int c, int d)
{
    if (a > b && a > c && a > d)
    {
        return a;
    }
    else if (b > c && b > d)
    {
        return b;
    }
    else if (c > d)
    {
        return c;
    }
    else
    {
        return d;
    }
} */

// Another way to solve with "ternary operators"

int max_of_four(int a, int b, int c, int d)
{
    return (a > b && a > c && a > d) ? a : (b > c && b > d) ? b
                                       : (c > d)            ? c
                                                            : d;
}

int main()
{
    int a, b, c, d, ans;
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d\n", &c);
    scanf("%d", &d);
    ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}