#include<stdio.h>
int main()
{
    int i,j,n,m,z,X,Y,Z;
    scanf("%d %d",&m,&n);
    char s[m][70];
    for(i=0;i<m;i++)
        for(j=0;j<70;j++)
            s[i][j]='o';
    int x[n][3];
    for(i=0;i<n;i++)
        for(j=0;j<3;j++)
        scanf("%d",&x[i][j]);
        for(j=0;j<n;j++)
        {
            X=x[j][0]-1;
            Z=x[j][2];
            for(z=0;z<Z;z++)
            {
                Y=x[j][1]-1+z;
                s[X][Y]='x';
            }
        }
        for(i=0;i<m;i++)
        {
           for(j=0;j<70;j++)
            printf("%c",s[i][j]);
            printf("\n");
        }



}
