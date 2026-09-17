#include <stdio.h>

int main()
{
    int a[100], n, x, i, first = -1, last = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            if(first == -1)
                first = i;
            last = i;
        }
    }

    if(first == -1)
        printf("Element not found");
    else
    {
        printf("First = %d\n", first + 1);
        printf("Last = %d\n", last + 1);
        printf("Count = %d", last - first + 1);
    }

    return 0;
}
