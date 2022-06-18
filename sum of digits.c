#include<stdio.h>

int sum(int n)
{
    if(n==0)
    return 0;
    else
    return (n%10 + sum(n/10));
        
    
}

void main()
{
    int n,s;
    printf("enter number");
    scanf("%d",&n);
   s=sum(n);
   printf("sum=%d",s);
}