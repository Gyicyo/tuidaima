#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include<stdbool.h>
#include <time.h>
struct List{
    int data;
    struct List *next;
};   //链表结构体
typedef struct List * List;
void Initlist(List L)
{
    L=(List)malloc(sizeof(List));
    (L)->next=NULL;
}//链表初始化
void Emptylist(List L)
{
    if(!(L->next==NULL))
    printf("链表不为空\n");
    else if(L->next==NULL)
        printf("链表为空\n");
}//判断链表是否为空(2)yes!
void Numlist(List L)
{
    int i=0;
    List p=L->next;
    while(p->next)
        {i++;
        p=p->next;}
    printf("共%d个节点\n",i+1);
}//输出链表节点个数(3)yes!
void Clearlist(List L,int *a,int *g)
{
    if(L->next==NULL)
    {
        printf("\a未创建含节点的链表!\a");
        return 0;
    }
    List p,q;
    p=(List)malloc(sizeof(List));
    p=L->next;
    while(!(p->next==NULL))
        {q=p->next;
    free(p);
    p=q;}
    free(q);
    (L)->next=NULL;
    *a=0;
    *g=2;
    printf("OK\n");
}//清空链表(4)yes!
int Returnlist(List L,int i,int *a)
{
    if(i>a)
    {
        printf("\a不存在该节点!\n");
        return 0;
    }
    List p=L,q;
    for(int n=0;n<i;n++)
    {
        q=p->next;
        if(p&&n==i-1)
        printf("第%d节点的数据为%d\n",i,q->data);
        p=p->next;
        q=p;
    }
}//返回给定位置元素值(5)yes!
void Findlist(List L,int m)
{
    List p=L->next,q;
    int i=1;
    int x=0;
    while(p->next!=NULL)
        {if(p->data==m&&x==0)
    {
        printf("该数据存在且在第%d节点\n",i);
        x=1;
    }
    if(x==2&&(p->data)==m)
        printf("            、第%d节点\n",i);
        i++;p=p->next;if(x==1)x=2;
}
if(x==0&&p->next==NULL&&p->data==m)
{printf("该数据存在且在第%d节点\n",i);x=3;}
if(x==0)
    printf("无该数据\n");
}//查找数据(6)yes!
void Dellist(List L,int n,int *m)
{
    List p=L->next,q,r;
    int i=1;
    while(i<n)
    {r=p;
    p=p->next;
        i++;
        if(p->next==NULL&&i!=n)
            {printf("\a该节点不存在!\n");
        return 0;}
    }
    if(p->next!=NULL)
        {q=p->next;
        r->next=q;}
        else if(p->next==NULL)
            r->next=NULL;
        *m--;
        printf("OK\n");
}//删除元素(7)yes!
void Addlist(List L,int n,int m)
{
    List p=L->next,q;
    int i=1;
    while(i<n)
    {
        p=p->next;
        i++;
    }
    if(!p)
        printf("无效添加!\n");
    else
    {q=(List)malloc(sizeof(struct List));
    q->data=m;
    q->next=p->next;
    p->next=q;
    printf("添加成功!\n");}
}//插入元素(8)yes!
void Creatlist(List L,int n)
{srand(time(0));
   L->next=NULL;
   List p,q;
   q=(List)malloc(sizeof(List));
   bool x=false;
   for(int i=1;i<=n;i++)
    {
        p=(List)malloc(sizeof(List));
        p->data=rand()%100+1;
        q->next=p;
        q=p;
        if(!x)
        {L->next=p;x=true;}
        if(i==n)
            q->next=NULL;
    }
    printf("OK\n");
}//建立有头节点的单链表(1)yes!
void GivList(List L,int n,int e)
{
    int i=1;
    List p=L->next;
     while(i<n)
    {
        p=p->next;
        i++;
    }
    if(!p)
    {printf("\a无效添加\n");
    return 0;}
    p->data=e;
    printf("OK\a");
}//给节点赋值(9)
int main()
{
    List L;
    struct List a;
    L=&a;
    int m,g=0;
    bool t=false;
    do{for(int i=0;i<29;i++)
        putchar('*');
    putchar('\n');
    for(int i=1;i<=10;i++)
        {
        switch(i)
        {
            case 1 :printf("*     1、创建单列表         *\n");break;
            case 2 :printf("*     2、判断链表是否为空   *\n");break;
            case 3 :printf("*     3、输出链表节点个数   *\n");break;
            case 4 :printf("*     4、删除链表           *\n");break;
            case 5 :printf("*     5、查找某节点的数据   *\n");break;
            case 6 :printf("*     6、查找数据           *\n");break;
            case 7 :printf("*     7、删除节点           *\n");break;
            case 8 :printf("*     8、插入节点           *\n");break;
            case 9 :printf("*     9、给节点赋值         *\n");break;
            case 10 :printf("*    10、结束操作           *\n");break;
            default :printf("\a无效输入!\n");break;
        }}
            for(int i=0;i<29;i++)
        putchar('*');
    putchar('\n');
        printf("选择一个操作:");
        scanf("%d",&m);
        int a,b,c,d,e,f,z,v;
        switch(m)
        {
            case 1 :printf("输入节点个数:");scanf("%d",&a);Creatlist(L,a);g=1;break;
            case 2 :if(g){Emptylist(L);break;}else {printf("\a未初始化!\n");break;}
            case 3 :if(g==1){Numlist(L);break;}else {printf("\a未初始化or链表为空!\n");break;}
            case 4 :if(g==1){Clearlist(L,&a,&g);break;}else {printf("\a未初始化or链表已为空!\n");break;}
            case 5 :if(g==1){printf("输入节点:");scanf("%d",&b);Returnlist(L,b,&a);break;}else {printf("\a未初始化or链表为空!\n");break;}
            case 6 :if(g==1){printf("输入要查找的数据:");scanf("%d",&c);Findlist(L,c);break;}else {printf("\a未初始化or链表为空!\n");break;}
            case 7 :if(g==1){printf("输入要删除的节点:");scanf("%d",&d);Dellist(L,d,&a);break;}else {printf("\a未初始化or链表为空!\n");break;}
            case 8 :if(g==1){printf("输入要插入的节点(在该节点后插入):");scanf("%d",&e);printf("输入插入节点的数据:");scanf("%d",&f);Addlist(L,e,f);break;}else {printf("\a未初始化or链表为空!\n");break;}
            case 9 :if(g==1){printf("输入要赋值的节点:");scanf("%d",&z);printf("输入要赋的值(整型-32768~32767):");scanf("%d",&v);GivList(L,z,v);break;}else {printf("\a未初始化or链表为空!\n");break;}
            case 10 :break;
            default :printf("\a无效输入!\n");break;
        }
    }while(m!=10);
    printf("结束!");
    return 0;
}
