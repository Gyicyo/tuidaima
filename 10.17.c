#include <stdio.h>
int key;
int m=0;
int search_idx(int a[],int n)
{
    int i;
    int p=;
    int idx[p];
    a[n]=key;
    for(i=0;i<=n;i++)
        {if(a[i]==key&&i!=n)
          m++;
          idx[p]=i;
          p++}
          if(m==0)
            printf("\a查找失败");
          else
          {int idx[m];

          return m; }
}
int main()
{
    int b,i;
    printf("输入元素个数:");
    scanf("%d",&b);
    int a[b];
    {printf("输入元素:\n");
    for(i=0;i<b;i++)
    scanf("%d",&a[i]);}
    printf("输入要查找的元素");scanf("%d",&key);
    printf("该数组中共有%d个%d\n",search_idx(a,b),key);
}

























#include <stdio.h>
void fill(int a[][3],int n,int v)
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<3;j++)
        a[i][j]=v;
}
void A(int a[][3],int n)
{
    int i,j;
    for(i=0;i<n;i++)
       {

        for(j=0;j<3;j++)
        printf("%4d",a[i][j]);
        putchar('\n');
       }
}
int main()
{
    int v;
    int m[2][3]={0},n[4][3]={0};
    printf("输入要填充的数:");
    scanf("%d",&v);
    fill(m,2,v);
    fill(n,4,v);
    printf("----m----\n");
    A(m,2);
    printf("----n----\n");
    A(n,4);
    return 0;
}

