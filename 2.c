#include<stdio.h>
int main()
{
    int i,j,n,m;
    scanf("%d %d",&m,&n);
    char s[m][70];
    for(i=0;i<m;i++)
        for(j=0;j<70;j++)
            s[i][j]='o';
    int x[n][3];
    for(i=0;i<n;i++)
        for(j=0;j<3;j++)
        scanf("%d",&x[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<3;j++)
            printf("%d",x[i][j]);


}
