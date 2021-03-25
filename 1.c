#include<stdio.h>
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
    if(i<3)
        sum=1;
    return sum;
}
int main()
{
    int n,i,sum=8;
    scanf("%d",&n);
    if(n<8)
        printf("%d",n);
    else
    {
        if(ct(n)==1)
        {
          for(i=8;i<n;i++)
        {
            sum+=ct(i);
        }
        printf("%d",sum);
        }

        else
            printf("Not Cube Free");
    }
}
