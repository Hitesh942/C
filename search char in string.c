#include <stdio.h>
#include<string.h>
int main() {
    char str[100],a;
    int i,n,flag=0;
    printf("enter string \t");
    fgets(str,sizeof(str),stdin);
    printf("\n Enter char to be search \t");
    scanf("%c",&a);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]==a)
        {
           ++flag;
            break;
        }
    }
    if(flag==1)
    printf("\n %c is in string",a);
    else
     printf("\n %c is not in string",a);
    return 0;
}