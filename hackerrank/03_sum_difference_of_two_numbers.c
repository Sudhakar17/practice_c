// https://www.hackerrank.com/challenges/sum-numbers-c/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a = 0, b = 0;
    float c = 0, d = 0;

    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);

    // sum and difference of integer and floating numbers

    printf("%d ", a+b);
    printf("%d\n", a-b);
    printf("%.1f ", c+d);
    printf("%.1f\n", c-d);
    
    return 0;
}

