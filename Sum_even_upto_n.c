#include <stdio.h>
int main()
{
    int n, sum = 0, count;
    printf("Enter a Number:");
    scanf("%d", &n);
    for (count = 1; count <= n; count++)
    {
        if (count % 2 == 0)
        {
            sum = sum + count;
        }
    }
    printf("Sum of even numbers :%d", sum);
    return 0;
}