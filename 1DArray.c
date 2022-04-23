#include <stdio.h>
int main()
{
    int length, sum = 0;
    scanf("%d\n", &length);
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < length; j++)
    {
        sum += arr[j];
    }
    printf("%d", sum);

    return 0;
}