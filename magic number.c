#include<stdio.h>
void main()
{
    int n,temp,sum=0,digit,rev=0;
    printf("enter number");
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        sum=sum+temp%10;
        temp=temp/10;
    }
    temp=sum;
    printf("\n the number of digits= %d",temp);
    
    while(temp>0)
    {
        rev=rev*10+temp%10;
        temp=temp/10;
        
    }
    printf("\n the reverse of digit=%d",rev);
    printf("\n %d * %d = %d",sum,rev,sum*rev);
    
    if(rev*sum==n)
    printf("\n number is magic");
    else
    printf("\n number is not magic");
}