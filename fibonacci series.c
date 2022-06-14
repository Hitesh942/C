#include <stdio.h>
void febonacci(int n)
{
    int i,next,f=0,s=1;
    for(i=1;i<=n;i++)
    {
        if(i<=1)
        next=i;
        else
        {
            next=f+s;
            f=s;
            s=next;
        }
      printf("%d,",next);
    }
}
void main()
{
    int n;
    printf("Enter number  ");
    scanf("%d",&n);
    febonacci(n);
 }