// https://www.hackerrank.com/challenges/playing-with-characters/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char ch;
    char s[10];
    char sen[100];
    scanf("%c",&ch);
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen); // https://stackoverflow.com/questions/30065675/what-does-scanf-nc-mean/30070821
    printf("%c\n%s\n%s",ch,s,sen);

    return 0;
}

