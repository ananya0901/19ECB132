#include<stdio.h>
void main()
{
    int n,i,cot=1;
    scanf("%d",&n);
    do
    {
        if(n%2==0)
        {
            n=n/2;
            cot++;
        }
        else
        {
            n=3*n+1;
            cot++;

        }
    }while(n>1);
    printf("%d",cot);
    
}
