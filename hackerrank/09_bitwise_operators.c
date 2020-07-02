// https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int res_and=0, res_or=0, res_xor=0;
  int max_and=0, max_or=0, max_xor=0;
  for(int a=1; a<=n; a++){
      for(int b=a+1; b<=n; b++){
          res_and = a & b;
          res_or  = a | b;
          res_xor = a ^ b;
          if ((res_and > max_and) && (res_and <= k-1)){max_and = res_and;}
          if ((res_or > max_or) && (res_or <= k-1)){max_or = res_or;}
          if ((res_xor > max_xor) && (res_xor <= k-1)){max_xor = res_xor;}
      }
  }
  printf("%d\n",max_and);
  printf("%d\n",max_or);
  printf("%d\n",max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
