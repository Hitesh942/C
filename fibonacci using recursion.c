#include<stdio.h>
int fibonacci(int n)
{
    if(n==0 || n==1)
    return n;
    else
    return (fibonacci(n-1)+fibonacci(n-2));
    
}
void main()
{
    int n,i,m=0;
    printf("\n Enter number \t");
    scanf("%d",&n);
    printf("Fibonacci series is:-");
    for(i=1;i<=n;i++)
    {
        printf("%d",fibonacci(m));
        m++;
    }
    
}