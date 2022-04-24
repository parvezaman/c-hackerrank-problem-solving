#include <stdio.h>
int main()
{
    int length;
    scanf("%d\n", &length);
    int arr[length];
    int temporary[length];

    scanf("%d", &arr);
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
        for (int j = length - 1; j >= 0; j--)
        {
            // sum += arr[j];
            temporary[j] = arr[i];
        }
    }
    // printf("%d", sum);
    for (int k = 0; k < length; k++)
    {
        printf("%d ", temporary[k]);
    }

    return 0;
}