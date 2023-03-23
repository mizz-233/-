/*===============================================
*   文件名称：linklist.h
*   创 建 者：     
*   创建日期：2023年03月23日
*   描    述：
================================================*/
#ifndef __LINKLIST_H__
#define __LINKLIST_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int data_t;
typedef struct node
{
    data_t data;
    struct node* next;
}node,*node_p;

//创建头节点
node_p CreatLinkList();

//判空
int IsEmpty(node_p head);

//求表长
int GetLen(node_p head);

//按位置插入
int PosList(node_p head,int pos,data_t num);

//按位置查询
int LookList(node_p head,int num);

//按位置修改
int ModList(node_p head,int mod,data_t num);

//头插法
int PosList_Head(node_p head,data_t num);

//尾插法
int PosList_Last(node_p head,data_t num);

//按位置删除
int DelList(node_p head,int del);

//按数据查找
int LookByData(node_p head,data_t num);

//按数据删除
int DelByData(node_p head,data_t num);

//按数据修改
int ModByData(node_p head,data_t num,data_t var);

//打印表
void Show(node_p head);

//清空链表
int ClearList(node_p head);

//销毁链表
int Destroy(node_p* head);

#endif
