// https://www.hackerrank.com/challenges/1d-arrays-in-c/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    

    int n = 0, sum = 0;
    scanf("%d",&n);

    int* arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i <n; i++)
    { 
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    printf("%d", sum);
    return 0;
}

