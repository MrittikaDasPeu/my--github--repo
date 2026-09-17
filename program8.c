#include <stdio.h>

int main()
{
    char str[200], text[100];
    int pos, i, j, len = 0, textLen = 0;

    printf("Enter the main string: ");
    scanf("%s", str);

    printf("Enter the text to insert: ");
    scanf("%s", text);

    printf("Enter position: ");
    scanf("%d", &pos);

    while(str[len] != '\0')
        len++;

    while(text[textLen] != '\0')
        textLen++;

    pos--;

    for(i = len; i >= pos; i--)
        str[i + textLen] = str[i];

    for(j = 0; j < textLen; j++)
        str[pos + j] = text[j];

    printf("String after insertion: %s\n", str);

    return 0;
}
