<time.h>
time函数:
函数原型: time_t time(time_t *timer)
参数说明: timer=NULL时得到当前日历时间（从1970-01-01 00:00:00到现在的秒数），timer=时间数值时，用于设置日历时间，time_t是一个unsigned long类型。如果 timer不为空，则返回值也存储在变量 timer中。
函数功能: 得到当前日历时间或者设置日历时间
函数返回: 当前日历时间
clock函数:
返回clock函数执行起，处理器时钟所使用的时间
#include<stdio.h>
#include<time.h>

int main()
{
    clock_t start_t,finish_t;
    double total_t = 0;
    int i = 0;
    start_t = clock();
    for(;i<100000;++i)
    {
        //do someting;
    }
    finish_t = clock();
    total_t = (double)(finish_t - start_t) / CLOCKS_PER_SEC;//将时间转换为秒

    printf("CPU 占用的总时间：%f\n", total_t);
    return 0;
}

ctime函数：
函数原型: char *ctime(const time_t * timer)
函数功能: 将日历时间参数timer转换为一个表示本地当前时间的字符串
函数返回: 返回字符串格式：星期,月,日,小时:分:秒,年
参数说明: timer参数应由函数time获得，其等价于 astime( localtime(timer) )
#include <stdio.h>
#include <time.h>

int main ()
{
   time_t curtime;
   time(&curtime);
   printf("当前时间 = %s", ctime(&curtime));

   return(0);
}

宏：CLOCKS_PER_SEC	这个宏表示每秒的处理器时钟个数。用于将clock()函数的结果转化为以秒为单位的量，这个量的具体值是与操作系统相关的，通常为1000。

NULL	这个宏是一个空指针常量的值

变量类型：
clock_t	这是一个适合存储处理器时间的类型，类型为unsigned long
time_t	这是一个适合存储日历时间类型。
struct tm	这是一个用来保存时间和日期的结构。
struct tm 
{
   int tm_sec;         /* 秒，范围从 0 到 59      */
   int tm_min;         /* 分，范围从 0 到 59      */
   int tm_hour;        /* 小时，范围从 0 到 23     */
   int tm_mday;        /* 一月中的第几天，范围从 1 到 31    */
   int tm_mon;         /* 月，范围从 0 到 11(注意)  */
   int tm_year;        /* 自 1900 年起的年数      */
   int tm_wday;        /* 一周中的第几天，范围从 0 到 6 */
   int tm_yday;        /* 一年中的第几天，范围从 0 到 365   */
   int tm_isdst;       /* 夏令时               */
};



<stdlib.h>
rand() 返回随机数
srand() 选取种子文件
在srand(time(0))的条件下rand()%n，rand返回0-(n-1)之间的随机数





<malloc.h>
malloc函数：
如果分配成功则返回指向被分配内存的指针，否则返回空指针NULL。
malloc函数的返回的是无类型指针，在使用时一定要强制转换为所需要的类型。

在使用malloc开辟空间时，使用完成一定要释放空间，如果不释放会造内存泄漏。
在使用malloc函数开辟的空间中，不要进行指针的移动，因为一旦移动之后可能出现申请的空间和释放空间大小的不匹配