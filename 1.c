#include<stdio.h>
int ch(int i)
{
    int sum=0;
    if(i<3)
        sum=1;
    return sum;
}
int ct(int n)
{
    int i=0,N,k=2,sum=0;
    N=n;
    do
    {
        if(N%k==0)
        {
            i++;
            N/=k;
        }
        else
        {
            if(i<3)
                i=0;
            k++;
        }
    }while(N>1);
    ch(i);
}
int main()
{
    int n,i,sum=1;
    scanf("%d",&n);
        if(ct(n)==1)
        {
          for(i=1;i<=n;i++)
        {
            sum+=ct(i);
        }
        printf("%d",sum);
        }

        else
            printf("Not Cube Free");
}
