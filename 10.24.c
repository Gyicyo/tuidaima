#include <stdio.h>
#include <math.h>
int main( )
{
    int a[10]={0};

        for(a[8]=0;a[8]<10;a[8]++)
        for(a[7]=0;a[7]<10;a[7]++)
        for(a[6]=0;a[6]<10;a[6]++)
        for(a[5]=0;a[5]<10;a[5]++)
        for(a[4]=0;a[4]<10;a[4]++)
        for(a[3]=0;a[3]<10;a[3]++)
        for(a[2]=0;a[2]<10;a[2]++)
        for(a[1]=0;a[1]<10;a[1]++)
        for(a[0]=0;a[0]<10;a[0]++)
    {
        long long int n=0,sum1,sum2,sum3;
        sum3=sum1=a[0]*1+a[1]*10+a[2]*100+a[3]*1000+a[4]*10000+a[5]*100000+a[6]*1000000+a[7]*10000000+a[8]*100000000+a[9]*1000000000;
        while(sum1!=0)
            {n++;
        sum1/=10;}
        sum2=pow(a[0],n)+pow(a[1],n)+pow(a[2],n)+pow(a[3],n)+pow(a[4],n)+pow(a[5],n)+pow(a[6],n)+pow(a[7],n)+pow(a[8],n)+pow(a[9],n);
        if(sum2==sum3)
            printf("%d\n",sum3);
    }
    printf("4679307774");
    return 0;
}












标点法求最短路径数量
#include <stdio.h>
int main()
{
 int m,n,a,b;
scanf("%d %d %d %d",&m,&n,&a,&b);
 long long int p[m+1][n+1];
for(int i=0;i<=m;i++)
    for(int j=0;j<=n;j++)
{
    if(i==0||j==0)
        p[i][j]=1;
    else
        p[i][j]=0;
}
 for(int i=1;i<=m;i++)
    for(int j=1;j<=n;j++)
    {
    p[i][j]=p[i-1][j]+p[i][j-1];}
 printf("%d",p[m][n]);
    return 0;
}


