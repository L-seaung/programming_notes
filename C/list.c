#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct Node
{
  int data;//数据域
  struct Node * pNext;//指针域
}NODE * PNODE;
//函数声明
PNODE create_list(void);//创建链表函数
void traverse_list(PNODE pHead);
bool is_empty(PNODE pHead);
int lenght_list(PNODE pHead);

int main(void)
{
  PNODE pHead = NULL;//定义头指针并初始化
  pHead = create_list();
  return 0;
}

PNODE create_list(void)
{
  int len;
  int i;
  int values;
  
  PNODE pHead = (PNODE)malloc(sizeof(NODE));
  //创建一个不存放有效数据的头节点
  if(NULL == pHead)
  {
    printf("分配内存失败！")；
    exit(-1);
  }
  
  printf("请输入想要创建节点的长度 len")；
  scanf("%d", &len)；
  
  PNODE pTail = pHead;//定义一个尾指针，目的是让它永远指向链表的尾
  pTail->pNext = NULL;//清空头指针
  
  for(i = 0; i < len; ++i)
  {
    printf("请输入第%d节点的值")；
    scanf("%d", &values);
    PNODE pNew = (PNODE)malloc(sizeof(NODE));
    if(NULL == pNew)
    {
      printf("内存分配失败，程序终止！");
      exit(-1);
    }
    
    pNew->data = val;
    pTail->pNext = pNew;
    pNew->pNext = NULL;
    pTail = pNew;
  }
  return pHead;
}

void traveser_list(PNODE pHead)
{
  PNODE p = pHead->pNext;
  while(NULL == !p)
  {
    printf("%d ",p->data);
    p = p->pNext;
  }
  printf("\n");
  return 0;
}

bool is_empty(PNODE pHead)
{
  if(NULL == pHead->pNext)//只有一个头结点，即头结点的指针为空则链表为空
    return true;
  else
    return false;
}

int lenght_list(PNODE pHead)
{
  PNODE p = pHead->pNext;//定义指针p使它指向头结点，如果它不空则加1，p后移，直到链表的尾部
  int len = 0;
  while(NULL != p)
  {
    ++len;
    p = p->pNext;
  }
  return len;
}






