#include <stdio.h>

void main()
{
    int n = 65;
    switch(n)
    {
        case 64:
            printf("case 64\n");
            break;
        case 'A':
            printf("case A\n");
        default:
            printf("default case\n");
    }
}