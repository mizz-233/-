/*===============================================
*   文件名称：main.c
*   创 建 者：     
*   创建日期：2023年03月23日
*   描    述：
================================================*/
#include"linklist.h"
int main(int argc, char *argv[])
{
    int pos,look,mod,del,a;
    data_t num,var;
    node_p head=(node_p)malloc(sizeof(node));

        while(1)
        {
            printf("1.创建头节点 2.判空 3.求表长 4.按位置插入\n5.按位置查询 6.按位置修改 7.头插法\n 8.尾插法 9.按位置删除 10.按数据查找\n11.按数据删除 12.按数据修改 13.打印表\n14.清空链表 15.销毁链表\n");
            printf("请输入功能选项：\n");
            scanf("%d",&a);
            getchar();
            switch(a)
            {
                case 1:
                    head=CreatLinkList();
                    break;
                case 2:
                    if(IsEmpty(head)==0)
                        printf("链表为空！\n");
                    else
                        printf("链表不为空！\n");
                    break;
                case 3:
                    printf("链表长度为：%d\n",GetLen(head));
                    break;
                case 4:
                    printf("请输入要插入的位置和数据：\n");
                    scanf("%d%d",&pos,&num);
                    PosList(head,pos,num);
                    break;
                case 5:
                    printf("请输入要查看的位置：\n");
                    scanf("%d",&look);
                    LookList(head,look);
                    break;
                case 6:
                    printf("请输入要修改的位置和数据：\n");
                    scanf("%d%d",&mod,&num);
                    ModList(head,mod,num);
                    break;
                case 7:
                    printf("请输入要插入的数据个数：\n");
                    scanf("%d",&num);
                    for(int i=0;i<num;i++)
                    {
                        PosList_Head(head,i);
                    }
                    break;
                case 8:
                    printf("请输入要插入的数据个数：\n");
                    scanf("%d",&num);
                    for(int i=0;i<num;i++){
                        PosList_Last(head,num);
                    }
                    break;
                case 9:
                    printf("请输入要删除的位置：\n");
                    scanf("%d",&del);
                    DelList(head,del);
                    break;
                case 10:
                    printf("请输入要查看的数据：\n");
                    scanf("%d",&num);
                    LookByData(head,num);
                    break;
                case 11:
                    printf("请输入要删除的数据：\n");
                    scanf("%d",&num);
                    DelByData(head,num);
                    break;
                case 12:
                    printf("请输入要修改的数据和修改后的数据：\n");
                    scanf("%d%d",&num,&var);
                    ModByData(head,num,var);
                    break;
                case 13:
                    Show(head);
                    break;
                case 14:
                    ClearList(head);
                    break;
                case 15:
                    Destroy(&head);
                    break;
                default:
                    break;
            }
            printf("\n");
        }
    return 0;
}
