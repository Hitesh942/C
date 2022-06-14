#include <stdio.h>
void right_angle_triangle(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }
}
void main()
{
    int n;
    printf("Enter number of rows");
    scanf("%d",&n);
    right_angle_triangle(n);
 }