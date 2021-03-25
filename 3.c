#include<stdio.h>
int number(int n)
{
    int k,N,num[100]={},i=0,mun[100]={},r,sum=0,ans=0;
    N=n;
    do
    {
        num[i]=N%10;
        N/=10;
        i++;
    }while(N>0);
    r=i;
    for(k=0;k<r;k++)
    {
        mun[k]=num[i-1];
        i--;
    }
    for(i=0;i<r;i++)
    {
        if(mun[i]==num[i])
            sum++;
            //printf("%d_%d",num[i],mun[i]);
    }
    if(r==sum)
        ans=1;
    return ans;

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
            sum+=number(i);
        }
        printf("%d",sum);
    }
}
