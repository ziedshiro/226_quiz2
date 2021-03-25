#include<stdio.h>
int len(int n)
{
    int N,i=0;
    N=n;
    do
    {
        N/=10;
        i++;
    }while(N>0);
    return i;
}
int pow(int i)
{
    int n,x;
    n=1,x;
    for(x=0;x<i-1;x++)
        n*=10;
        return n;
}
int pd(int n,int sum)
{
    int N,i,pd=0,s,pw,x=0;
    i=len(n);
    N=n;
    pw=pow(i);

    do
    {
        s=(N%10);
        pd=pd+(s*pw);
        N/=10;
        pw/=10;
        x++;
    }while(x!=i);
    if(pd==n)
        sum=1;
    else
        sum=0;
    return sum;
}
int main()
{
    int n,i,sum=9,x;
    scanf("%d",&n);
    if(n<10)
        printf("%d",n);
    else
    {
        for(i=10;i<=n;i++)
        {
            sum+=pd(i,x);
        }
        printf("%d",sum);
    }
}
