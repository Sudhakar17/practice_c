// https://www.hackerrank.com/challenges/functions-in-c/problem
#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int w, int x, int y, int z)
{
    int result, max;

    max = (w > x ? w : x);

    result = (y > z ? (y > max ? y : max):(z > max ? z : max));

    return result;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

