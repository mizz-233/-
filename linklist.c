/*===============================================
*   文件名称：linklist.c
*   创 建 者：     
*   创建日期：2023年03月22日
*   描    述：
================================================*/
#include "linklist.h"
//创建头节点
node_p CreatLinkList()
{
    node_p head=(node_p)malloc(sizeof(node));
    if(NULL==head)
        return NULL;
    head->next=NULL;
    head->data=-1;
    return head;
}
//判空
int IsEmpty(node_p head)
{
    if(NULL==head)
        return -1;
   return ((head->next==NULL)?0:1);
}
//求表长
int GetLen(node_p head)
{
    if(NULL==head)
        return -1;
    int len=0;
    node_p p=head->next;
    while(p!=NULL)
    {
        p=p->next;
        len++;
    }
    return len;
}
//按位置插入
int PosList(node_p head,int pos,data_t num)
{
    if(head==NULL)
        return -1;
    int len=GetLen(head);
    if(pos<0||pos>len)
        return -1;
    node_p p=head;
    node_p new=(node_p)malloc(sizeof(node));
    new->data=num;
    new->next=NULL;
    while(pos--)
    {
        p=p->next;
    }
    new->next=p->next;
    p->next=new;
    return 0;
}
//按位置查询
int LookList(node_p head,int num)
{
    if(NULL==head)
        return -1;
    if(num<0||num>GetLen(head))
        return -1;
    node_p p=head;
    while(num--)
    {
        p=p->next;
    }
    printf("%d\n",p->data);
}
//按位置修改
int ModList(node_p head,int mod,data_t num)
{
    if(NULL==head)
        return -1;
    if(mod<0||mod>GetLen(head))
        return -1;
    node_p p=head;
    while(mod--)
    {
        p=p->next;
    }
    p->data=num;

}
//头插法
int PosList_Head(node_p head,data_t num)
{
    if(NULL==head)
        return -1;
    node_p new=(node_p)malloc(sizeof(node));
    new->data=num;
    new->next=NULL;
    new->next=head->next;
    head->next=new;
    return 0;
}
//尾插法
int PosList_Last(node_p head,data_t num)
{
    if(NULL==head)
        return -1;
    node_p p=head;
    node_p new=(node_p)malloc(sizeof(node));
    for(int i=0;i<GetLen(head);i++)
    {
        p=p->next;
    }
    p->next=new;
    new->data=num;
    new->next=NULL;
    return 0;
}
//按位置删除
int DelList(node_p head,int del)
{
    if(NULL==head)
        return -1;
    if(IsEmpty(head)==0)
        return -1;
    int len=GetLen(head);
    if(del<0||del>len)
        return -1;
    node_p p=head;
    node_p q=NULL;
    while(-1+del--)
    {
        p=p->next;
    }
    q=p->next;
    p->next=p->next->next;
    free(q);
    return 0;
}
//按数据查找
int LookByData(node_p head,data_t num)
{
    if(NULL==head)
        return -1;
    node_p p=head;
    int count=0;
    printf("符合的数据次序为：\n");
    while(p->next!=0)
    {
        if(p->data==num)
            printf("%-4d",count);
        p=p->next;
        count++;
    }
    return 0;
}

//按数据删除
int DelByData(node_p head,data_t num)
{
    if(NULL==head)
        return -1;
    node_p p=head;
    node_p q=NULL;
    while(p->next!=0)
    {
        if(p->next->data==num)
        {
            q->next=p->next->next;
            p->next=q->next;
            free(q);
        }
    }
    return 0;
}
//按数据修改
int ModByData(node_p head,data_t num,data_t var)
{
    if(NULL==head)
        return -1;
    node_p p=head;
    while(p->next!=0)
    {
        if(p->data==num)
            p->data=var;
        p=p->next;
    }
    return 0;
}
//打印表
void Show(node_p head)
{
    node_p p=head->next;
    while(p!=NULL)
    {
        printf("%-4d",p->data);
        p=p->next;
    }
    printf("\n");
}
//清空链表
int ClearList(node_p head)
{
    if(NULL==head)
        return -1;
    for(int i=GetLen(head);i>0;i--)
    {
        DelList(head,i);
    }
    return 0;
}
//销毁链表
int Destroy(node_p* head)
{
    if(IsEmpty(*head)==0)
    {
        free(*head);
        *head=NULL;
    }
    else
        return -1;
    return 0;
}

