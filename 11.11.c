#include<stdio.h>
#include <stdbool.h>
char s[1000009];
int main()
{
    bool n=false;
    char z[11];
    gets(z);
    int j=0,ans=0;
    int ansx;
    while(z[j])
        j++;
        gets(s);
        int t=0;
        while(s[t])
            t++;
        int sum=0;
        char x[11];
    for(int i=0;i<t;i++)
    {
        if(s[i]!=32)
        {
            x[sum]=s[i];
            sum++;
            if(i!=t-1)
            continue;
        }
     if(sum==j)
    {
            int h=i-j;
            int v=sum;
            for(int p=0;p<sum;p++)
            if(!(x[p]==z[p]||x[p]+32==z[p]||z[p]+32==x[p]))
            break;
            else
            v--;
            if(v==0)
        {
            if(n==false)
        {
            ansx=h;
            if(i!=j)
            ansx+=1;
            n=true;
        }
            ans++;
        }

        }
            sum=0;
            continue;
        }
    if(ans==0)
    printf("-1");
    else
    printf("%d %d",ans,ansx);
    return 0;
}
