#include<stdio.h>
int main()
{
    int n,fact=1,count;
    printf("Enter a Number:\n");
    scanf("%d",&n);
    int m=n;
    for(count=1 ; count <=n ; count++){
        fact=fact*count;
    }
    printf("Factorial Of Number %d is %d",m,fact);
    return 0;
}