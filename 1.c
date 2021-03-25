#include<stdio.h>
int main()
{
    int n,i=1,j=0;
    scanf("%d",&n);
    do
    {
        if(n%i==0)
            j++;
        else
        {
            j=0;
            i++;
        }

    }while(i!=n);
    if(j==3)
        printf("y");
    else
        printf("Not Cube Free");
}
