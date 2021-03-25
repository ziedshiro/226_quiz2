#include<stdio.h>
#include<math.h>
int len(int n)
{
    int N,i=0;
    N=n;
    do
    {
        N/10;
        i++;
    }while(N>0);
    return i;
}
int pd(int n,int sum)
{
    int N,i,pd,s=0,pw;
    i=len(n);
    N=n;
    pw=pow(10,i);
    do
    {
        s=(N%10);
        N/=10;
        s++;
    }while(s!=i);
}
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
            pd(i,sum);
        }
        printf("%d",sum);
    }
}
