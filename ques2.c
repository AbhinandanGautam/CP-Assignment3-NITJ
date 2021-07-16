#include<stdio.h>

int series(int n){
    int fact=1;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
    fact*=i;
     sum+=fact/i;
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    int sum = series(n);

    printf("The sum of the series = %d\n",sum);
}