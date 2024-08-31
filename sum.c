#include <stdio.h>
int main()
{
   int n,sum;
    scanf("&d", &n);
    sum = (n*(n+1))/2;
    printf("The sum of the first %d natural digit is %d \n",n,sum);
  return 0;
}
