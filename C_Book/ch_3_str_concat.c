#include <stdio.h>


void strcat(char s[], char t[])
{
    int i = 0;
    int j = 0;
    while(s[i] != '\0') // Find the end of s
        i++;
    // while((s[i++]=t[j++]) != 0)
    //     ;
    while(t[j] != '\0')
        s[i++]=t[j++];
    printf("%s", s);
}

int main()
{
    
    char s[] = "hello";
    char t[] = "world";
    strcat(s, t);
    return 0;
}