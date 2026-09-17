#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], sub[100];
    char *pos;

    printf("Enter the main string: ");
    scanf("%99s", str);

    printf("Enter the substring: ");
    scanf("%99s", sub);

    pos = strstr(str, sub);

    if (pos != NULL)
    {
        printf("Substring found.\n");
        printf("Starting position = %d\n", (int)(pos - str) + 1);
    }
    else
    {
        printf("Substring not found.\n");
    }

    return 0;
}
