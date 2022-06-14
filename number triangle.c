#include <stdio.h>
void number_triangle(int n)
{
    int i,j,m,o=n;
    for(i=1;i<=n;i++)
    {
        
        for(j=1;j<=o;j++)
        printf(" ");
         o--;
        for(m=1;m<=i;m++)
        printf("%d ",i);
        printf("\n");
       
    }
}
void main()
{
    int n;
    printf("Enter number of rows");
    scanf("%d",&n);
   number_triangle(n);
 }