#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permutation(char str[], int left, int right)
{
    int i;

    if (left == right)
    {
        printf("%s\n", str);
        return;
    }

    for (i = left; i <= right; i++)
    {
        swap(&str[left], &str[i]);

        permutation(str, left + 1, right);

        swap(&str[left], &str[i]);
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("All permutations are:\n");

    permutation(str, 0, strlen(str) - 1);

    return 0;
}
