#include<stdio.h>

int main()
{
    int sod(int);
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Su of Digits of %d is %d.\n",n,sod(n));

}
int sod(int n)
{
    if (n)
    {
        int r = n % 10;
        return r + sod(n/10);
    }
    else
        return 0;
}
