#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the limit: ");
    scanf("%d", &n);

    int prime[n + 1];

    for (i = 0; i <= n; i++)
    {
        prime[i] = 1;
    }

    prime[0] = 0;
    prime[1] = 0;

    for (i = 2; i * i <= n; i++)
    {
        if (prime[i] == 1)
        {
            for (j = i * i; j <= n; j += i)
            {
                prime[j] = 0;
            }
        }
    }

    printf("Prime numbers are:\n");

    for (i = 2; i <= n; i++)
    {
        if (prime[i] == 1)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
