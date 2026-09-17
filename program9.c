#include <stdio.h>

int main()
{
    char str[200], text[100];
    int pos, i, j, len = 0;

    printf("Enter the string: ");
    scanf("%s", str);

    printf("Enter the text to delete: ");
    scanf("%s", text);

    printf("Enter position: ");
    scanf("%d", &pos);

    /* Find length of text to delete */
    while (text[len] != '\0')
    {
        len++;
    }

    /* Convert position from 1-based to 0-based */
    pos--;

    /* Delete the text */
    for (i = pos; str[i + len] != '\0'; i++)
    {
        str[i] = str[i + len];
    }

    /* Add string terminator */
    str[i] = '\0';

    printf("String after deletion: %s\n", str);

    return 0;
}
