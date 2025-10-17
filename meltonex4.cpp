#include<stdio.h>
#include<conio.h>

int main()
{
    int recgcd(int,int);
    int n,d;
    printf("GCD: Enter two numbers:");
    scanf("%d %d",&n,&d);
    printf("GCD of %d and %d is %d\n",n,d,recgcd(n,d));

}
int recgcd(int n, int d)
{
    return ((n%d)?recgcd(d,n%d):d);
}
