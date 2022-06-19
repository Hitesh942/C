#include <stdio.h>

void main() {
    int n,i,j;
    printf("Enter n*n matrix size");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
     printf("Enter array \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("Enter array \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
      printf("Addition of array is \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }
 
}