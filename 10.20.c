/*冒泡排序法*/
#include<stdio.h>
#define NUMBER 5
int A(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
        for(j=n-1;j>i;j--)
        if(a[j-1]>a[j])
    {
        int m;
        m=a[j];
        a[j]=a[j-1];
        a[j-1]=m;
    }
}
int main()
{
    int i;
    int a[NUMBER];
    for(i=0;i<NUMBER;i++)
        scanf("%d",&a[i]);
        A(a,NUMBER);
        for(i=0;i<NUMBER;i++)
            printf("%d\n",a[i]);
}
















/*

	对数组进行输入（滑冰题一次性输入）
*/

#include <stdio.h>

int main(void)
{
	int ch[99],i=0;

	while((ch[i]=getchar())!='#')
		{
		i++;}
for(i=0;i<5;i++)
    printf("%c\n",ch[i]);
	return 0;
}