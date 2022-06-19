#include <stdio.h>
#include<string.h>
void digit(char str[],int n)
{
    int i,d,c,s,v;
    i=d=c=s=v=0;
    for(i=0;i<n;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='U' || str[i]=='O' )
        {
            v++;
        }
       else if(str[i]=='0' || str[i]=='1' || str[i]=='2' || str[i]=='3' || str[i]=='4' || str[i]=='5' || str[i]=='6'|| str[i]=='7' || str[i]=='8' || str[i]=='9')
        {
            d++;
        }
       else if(str[i]==' ')
        {
            s++;
        }
        else
        c++;
    }
    printf("\n There are %d Digits in string",d);
    printf("\n There are %d spaces in string",s);
    printf("\n There are %d vovels in string",v);
    printf("\n There are %d consonent in string",c);
}
int main() {
    char str[100],a;
    int i,n,flag=0;
    printf("enter string \t");
    fgets(str,sizeof(str),stdin);
 
    n=strlen(str);
    digit(str,n);
  
    return 0;
}