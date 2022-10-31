#include <stdio.h>
#include <math.h>
#define sqr(n) ((n)*(n))
typedef struct{
double x;
double y;
}point;//坐标位置
typedef struct{
point pt;
double fuel;
}car;
double weizhi(point now,point me)
{
    return sqrt(sqr(now.x-me.x)+sqr(now.y-me.y));
}
void fuel_pt(car a)
{
    printf("当前位置:(%.2f,%.2f)\n",a.pt.x,a.pt.y);
    printf("剩余燃料:%.2f\n",a.fuel);
}
int move(car *c,point dest)
{
    double d=weizhi(c->pt,dest);
    if(d>c->fuel)
        return 0;
    c->pt=dest;
    c->fuel-=d;
    return 1;
}
double deal(car *m,point dest)
{
    double d=weizhi(m->pt,dest);
    return d;
}
int main()
{
    car mycar={{0.0,0.0},90.0};
    while(1)
    {
        int select;
        point dest;
        fuel_pt(mycar);
        printf("要开车吗？Y---1/N---0:");
        scanf("%d",&select);
        if(select!=1)break;
        printf("目的地X坐标:");scanf("%lf",&dest.x);
        printf("      Y坐标:");scanf("%lf",&dest.y);
        if(!move(&mycar,dest))
            printf("\a该次出行须消耗燃料%.2fL,燃料不足无法行驶。",deal(&mycar,dest));
    }
}