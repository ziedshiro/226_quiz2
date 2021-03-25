#include<stdio.h>
int main()
{
    int n,i=2,j=0;
    scanf("%d",&n);
    do
    {
        if(n%i==0)
            j++;
        else
        {
            j=1;
            i++;
        }
        n/=i;
        printf("%d",j);
    }while(n>1);
    if(j==3)
        printf("Not Cube Free");
    else
        printf("Y");
}
