#include <stdio.h>
#include <math.h>
int main()
{
    int n,i;
    char flag = 'y';
    printf("Enter a no. \n");
    scanf("%d",&n);
    if (n == 1)
        printf("1 is neither composite nor prime. \n");
    else if (n == 2)
        flag = 'y';
    else
    if (n % 2 == 0)
        flag = 'n';
    else
    for(i=3;i<=sqrt(n);i+=2)
    {
        if (n % i == 0)
        {
            flag = 'n';
            break;
        }
    }
    if (flag == 'y')
      printf("%d is a prime no.",n);
  else
      printf("%d is not a prime no.",n);
}
