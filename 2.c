#include<stdio.h>
int main()
{
    int i,j,n,m;
    scanf("%d %d",&m,&n);
    char s[m][70];
    for(i=0;i<m;i++)
        for(j=0;j<70;j++)
            s[i][j]='o';
            for(i=0;i<m;i++)
        {
            for(j=0;j<70;j++)
        printf("%c",s[i][j]);
        printf("\n");
        }


}
