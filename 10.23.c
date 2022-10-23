#include <stdio.h>
#include <stdbool.h>
bool p[1001];
int ans,n,i;
int main() {
    scanf("%d",&n);
    while(n--){
        scanf("%d",&i);
        if(!p[i])ans++;       //如果是0，再让它加。直接排除重复项
        p[i]=1;               //区别于其他项
    }
    printf("%d\n",ans);
    for (int i=0;i<=1000;i++)if(p[i])printf("%d ",i);
    return 0;
}//       类似桶排序法

















#include<stdio.h>
void Fun1()
{
	int arr1[8]={78,59,43,9,0,11,784,987}; //定义数组一
	int arr2[1000]={0};               //定义数组二
	int x;
	int t;
	for(t=0;t<=7;t++)
	{
		arr2[arr1[t]]=arr2[arr1[t]]+1;
		//将数组一的值作为数组二的下标，数组一中每读取到一个同样的值就将这个下标对应的数组二的值加一
	}
	for(int z=0;z<1000;z++)     //用循环输出	                                    
        while(arr2[z]-->0)			
        printf("%d\n",z);      //如果下标是一，就出输出一次然后“--”为零，如果不为一，则循环输出多次z的值		
	}
int main()
{

	Fun1();
	return 0;
}



