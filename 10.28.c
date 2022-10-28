#include <stdio.h>
long long int a,b,m,n,x[99][99]={0},ma[99][99]={0};
void Ma(long long x,long long y)
{
    ma[x][y]=1;
    ma[x-1][y-2]=1;
    ma[x-2][y-1]=1;
    ma[x-2][y+1]=1;
    ma[x-1][y+2]=1;
    ma[x+1][y-2]=1;
    ma[x+2][y-1]=1;
    ma[x+2][y+1]=1;
    ma[x+1][y+2]=1;
}
int main()
{
    scanf("%lld %lld %lld %lld",&a,&b,&m,&n);
    a++,b++,m++,n++;
    Ma(m,n);
    x[1][1]=1;
    for(int i=1;i<=a;i++)
        for(int j=1;j<=b;j++)
        if(i==1&&j==1)
        continue;
    else if(ma[i][j]==0)
        x[i][j]=x[i-1][j]+x[i][j-1];
    printf("%lld",x[a][b]);
}



















#include <stdio.h>
int A(int a[],int n)
{
    int i,j,k,q,max;
    max=a[0];
    for(i=0;i<n;i++)
        if(a[i]>max)
        max=a[i];
    for(i=0;i<n;i++)
        {for(j=i+1;j<n;j++)
        if(a[i]>a[j])
    {
         q=a[i];
         a[i]=a[j];
         a[j]=q;
    }
    if(i)
        for(k=0;k<i;k++)
    if(a[i]==a[k])
       {
           a[i]=max;
           break;
       }
}
}
int main()
{
    int a,i,j,n=0;
    double p=0;
    scanf("%d",&a);
    int m[1005];
    for(i=0;i<a;i++)
        scanf("%d",&m[i]);
    for(i=0;i<a;i++)
        {
            for(j=0;j<a;j++)
            if(m[i]==m[j])
            n++;
            p=p+1.0/n;
             n=0;
        }
        printf("%.0f\n",p);
        A(m,a);
        A(m,a);
        for(i=0;i<p;i++)
            {if(i!=p-1)
            printf("%d ",m[i]);
        else
            printf("%d",m[i]);}
        return 0;
}

