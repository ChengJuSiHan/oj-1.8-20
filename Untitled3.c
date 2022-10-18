#include <stdio.h>
int main()
{
    int k=0,n,i,j,j_,z,m=0;
    char a[205]={0},b[205][205]={'0'},c[205][205]={'0'};
    scanf("%d",&n);
    scanf("%s",&a);
    for(i=0;i<205;i++)
        if(a[i]>='a'&&a[i]<='z') k++;
        else break;
     z=k/n;
     for(i=0;i<z;i++)
        for(j=0;j<n;j++,m++)
        c[i][j]=a[m];
     for(i=0;i<z;i++)
        for(j=0,j_=n-1;j<n;j++,j_--)
        if((i+1)%2!=0) b[i][j]=c[i][j];
    else b[i][j]=c[i][j_];
    for(j=0;j<n;j++)
        for(i=0;i<z;i++)
        printf("%c",b[i][j]);
}


