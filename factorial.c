#include<stdio.h>
void main()
{
    int n;
   // printf("enter the number");
    scanf("%d",&n);
    if(n>=10)
    {
       printf("Too big a number");
    }
    else if(n<0)
    {
       printf("Negative number");
    }
    else
    {
        int i,fac=1;
        for(i=1;i<=n;i++)
        fac=fac*i;
       printf("factorial %d",fac);
    }
}
