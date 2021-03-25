#include<stdio.h>
int main()
{
    int n,i,sum=9;
    scanf("%d",&n);
    if(n<10)
        printf("%d",n);
    else
    {
        for(i=10;i<=n;i++)
        {
            printf("%d",sum);
        }
    }
}
