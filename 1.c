#include<stdio.h>
int main()
{
    int n,i=2,sum=0,j=0;
    scanf("%d",&n);
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
    {
         printf("Not Cube Free");;
    }
    else
    {
        printf("y");;
    }
}
