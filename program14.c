#include <stdio.h>

int main()
{
    int a[100], n, x, i;
    int low, high, mid, first = -1, last = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    low = 0;
    high = n - 1;

    /* Find first occurrence */
    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == x)
        {
            first = mid;
            high = mid - 1;
        }
        else if(a[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }

    low = 0;
    high = n - 1;

    /* Find last occurrence */
    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == x)
        {
            last = mid;
            low = mid + 1;
        }
        else if(a[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
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
