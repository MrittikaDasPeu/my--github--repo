#include <stdio.h>

int LENGTH(char s[])
{
    int i=0;
    while(s[i]) i++;
    return i;
}

char GETCHAR(char s[], int n)
{
    return s[n-1];
}

void PUTCHAR(char s[], int n, char c)
{
    s[n-1]=c;
}

int POS(char s1[], char s2[])
{
    int i,j;
    for(i=0;s1[i];i++)
    {
        for(j=0;s2[j] && s1[i+j]==s2[j];j++);
        if(!s2[j]) return i+1;
    }
    return -1;
}

void CONCAT(char s1[], char s2[], char r[])
{
    int i=0,j=0;
    while(s1[i]) r[i]=s1[i++];
    while(s2[j]) r[i++]=s2[j++];
    r[i]='\0';
}

void SUBSTRING(char s[], int n, int l, char r[])
{
    int i;
    for(i=0;i<l;i++) r[i]=s[n-1+i];
    r[i]='\0';
}

void DELETE(char s[], int n, int l)
{
    int i=n-1;
    while(s[i+l]) s[i]=s[i+l],i++;
    s[i]='\0';
}

void INSERT(char s1[], char s2[], int n)
{
    int i,j,l=LENGTH(s2);
    for(i=LENGTH(s1);i>=n-1;i--) s1[i+l]=s1[i];
    for(j=0;j<l;j++) s1[n-1+j]=s2[j];
}

int COMPARE(char s1[], char s2[])
{
    int i=0;
    while(s1[i] && s1[i]==s2[i]) i++;
    return s1[i]-s2[i];
}

int main()
{
    char s1[200],s2[100],r[200],c;
    int n,l;

    printf("Enter first string: ");
    scanf("%199s",s1);
    printf("Enter second string: ");
    scanf("%99s",s2);

    printf("LENGTH = %d\n",LENGTH(s1));

    printf("Enter position for GETCHAR: ");
    scanf("%d",&n);
    printf("GETCHAR = %c\n",GETCHAR(s1,n));

    printf("Enter position and character for PUTCHAR: ");
    scanf("%d %c",&n,&c);
    PUTCHAR(s1,n,c);
    printf("PUTCHAR = %s\n",s1);

    printf("POS = %d\n",POS(s1,s2));

    CONCAT(s1,s2,r);
    printf("CONCAT = %s\n",r);

    printf("Enter position and length for SUBSTRING: ");
    scanf("%d %d",&n,&l);
    SUBSTRING(s1,n,l,r);
    printf("SUBSTRING = %s\n",r);

    printf("Enter position and length for DELETE: ");
    scanf("%d %d",&n,&l);
    DELETE(s1,n,l);
    printf("DELETE = %s\n",s1);

    printf("Enter position for INSERT: ");
    scanf("%d",&n);
    INSERT(s1,s2,n);
    printf("INSERT = %s\n",s1);

    printf("COMPARE = %d\n",COMPARE(s1,s2));

    return 0;
}
