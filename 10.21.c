//滑冰检测(例子)
#include <stdio.h>
int main(void)
{
    int a=0,b=0,c=0,d=0,ch;
    while((ch=getchar())!=EOF)
    {
        switch(ch)
        {case 'a' :a += 1;break;
        case 'b' :b += 1;break;
        case 'c' :c += 1;break;
        case 'd' :d += 1;break;}
            }
            printf("%d %d %d %d",a,b,c,d);
}
abcdabcdabcdabcd
4 4 4 4











#include <stdio.h>
void sum_diff(int n1, int n2, int *sum, int *diff)
{
	*sum  = n1 + n2;
	*diff = (n1 > n2) ? n1 - n2 : n2 - n1;
}
int main(void)
{
    int na, nb;
	int wa = 0, sa = 0;
	puts("请输入两个整数。");
	printf("整数A：");   scanf("%d", &na);
	printf("整数B：");   scanf("%d", &nb);
	sum_diff(na, nb, &wa, &sa);
	printf("两数之和为%d，之差为%d。\n", wa, sa);
	return 0;
}
