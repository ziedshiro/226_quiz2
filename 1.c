#include<stdio.h>
int ans(int sum,int N)
{
    int i,k,n,j=0;
    for(i=2;i<=N;i++)
    {
        k=2;
        n=i;
        j=0;
        do
        {
           if(n%k==0)
        {
            n/=k;
            j++;
        }
        else
        {
            k++;
            if(j<3)
                j=0;
        }
        }while(n>1);
        if(j<3)
            sum++;
    }
    return sum;
}
int main()
{
    int n,i=2,sum=1,j=0,N;
    scanf("%d",&n);
    N=n;
    do
    {
        if(n%i==0)
        {
            n/=i;
            j++;
        }
        else
        {
            i++;
            if(j<3)
                j=0;
        }
    }while(n>1);
    if(j>=3)
         printf("Not Cube Free");
    else
    {
        if(N==1)
            printf("1");
        else
        printf("%d",ans(sum,N));;
    }
}
