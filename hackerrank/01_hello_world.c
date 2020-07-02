// https://www.hackerrank.com/challenges/hello-world-c/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s); // https://stackoverflow.com/questions/30065675/what-does-scanf-nc-mean/30070821
    printf("Hello, World! \n");
    printf("%s",s);
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

