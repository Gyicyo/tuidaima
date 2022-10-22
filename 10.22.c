#include <stdio.h>
int main()
{
    int i,p,q,j;
    scanf("%d %d",&i,&p);
    int a[i+1];
    for(j=0;j<=i;j++)
        a[j]=0;
    for(p;p>0;p--)
    {
        int m,n;
        scanf("%d %d",&m,&n);
        for(m;m<=n;m++)
            a[m-1]++;
    }
    for(i+1;i+1>0;i--)
        if(!(a[i]))
        q++;
    printf("%d",q);
    return 0;
}











#include <stdio.h>
int main()
{
    int i,p,q,j;
    scanf("%d %d",&i,&p);
    long int a[i+1];
    for(j=0;j<=i;j++)
        a[j]=0;
    for(p;p>0;p--)
    {
        int m,n;
        scanf("%d %d",&m,&n);
        for(m;m<=n;m++)
        a[m]++;
    }
    for(i+1;i+1>0;i--)
        if(!(a[i]))
        q++;
    printf("%d",q);
    return 0;
}
