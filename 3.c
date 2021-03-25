#include<stdio.h>
int number(int n)
{
    int N,num[100],i=0;
    N=n;
    do
    {
        num[i]=N%10;
        N/=10;
        i++;

    }while(N>0);

}
int main()
{
    int n,i=0,sum=9,x,N;
    scanf("%d",&n);
    if(n<10)
        printf("%d",n);
    else
    {

        for(i=10;i<=n;i++)
        {
            number(i);
        }
        printf("%d",sum);
    }
}
