#include<stdio.h>
#include<ctype.h>

int atoi( char s[])
{
    int i, n, sign;
    for (i=0; isspace(s[i]); i++) // skip white space
        ;
    sign = (s[i] == '-') ? -1 : +1;
    //printf("%d", sign);
    if (s[i] == '-' ||  s[i] == '+') // skip sign
        i++;
    for (n=0; isdigit(s[i]); i++)
        n = n * 10 + (s[i] - '0');
    
    // printf("%d", n);
    return sign * n;
}


int main()
{
    int result;
    char s[] = " -110";
    result = atoi(s);
    printf("%d", result);
    return 0;
}