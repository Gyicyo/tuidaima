#include <stdio.h>
#include <math.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        {
            int b[20005]={0};
            for(int j=0;j<n;j++)
            for(int p=0;p<n;p++)
        if(a[i]==(a[j]+a[p])&&a[j]!=a[p])
        {

            if(!(b[abs(a[j]+a[p])]))
            {
                b[abs(a[j]+a[p])]=1;
                sum++;
            }
        }
        }
    printf("%d",sum);
    return 0;
}
