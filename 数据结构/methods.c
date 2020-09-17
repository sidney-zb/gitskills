#include"status.h"
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
//栈的初始化

Status InitStack_Sq(SqStack *S, int size, int inc)
{
	S->elem = (ElemType*)malloc(size * sizeof(ElemType));
	if (NULL == S->elem) return OVERFLOW;
	S->top = 0;       // 置S为空栈
	S->size = size;
	S->increment = inc;
	return OK;

}
Status Push_Sq(SqStack *S, ElemType e)// 栈的入栈操作
{
	ElemType * newbase;
	if (S->top >= S->size)
	{
		newbase = (ElemType*)realloc(S->elem, (S->size + S->increment) * sizeof(ElemType));
		if (NULL == newbase)
			return OVERFLOW;
		S->elem = newbase;
		S->size += S->increment;
	}
	S->elem[S->top] = e; S->top++;
	printf("%d  ", S->elem[S->top - 1]);
	return OK;
}
Status Pop_Sq(SqStack *S )//栈的出栈操作
{
	ElemType e;
	if (S->top == -1)
		printf("栈为空，不能出栈");
	--S->top;
	e = S->elem[S->top];
	 printf("出栈元素为%d\n", e);
	return OK;

}
/*Status Get_Sq(SqStack *S,int n)// 取栈元素
{
	if (S->top == -1)//判断栈是否为空
	{
		printf("空栈");
		return ERROR;
	}
	if (n >= S->top || n < 0)
	{
		printf("数据错误\n");
		return ERROR;
	}
	printf("你查找的元素为%d\n",S->elem[n]);

	return OK;
	
}*///队列初始化
Status InitQueue_Sq(SqQueue *Q, int size)
{
	Q->base = (ElemType*)malloc(size*sizeof(ElemType));
	if (Q->base == NULL)
		return OVERFLOW;
	Q->maxSize = size;
	Q->front = Q->rear = 0;

}
Status EnQueue_Sq(SqQueue *Q, ElemType e)//入列操作
{
if ((Q->rear + 1) % Q->maxSize == Q->front)  return FALSE;
Q->base[Q->rear] = e;
Q->rear = (Q->rear + 1)%Q->maxSize;
printf("%d   ", Q->base[Q->rear-1]);
return OK;
}
Status DeQueue_Sq(SqQueue *Q)//出队操作
{
	int e;
	if (Q->front == Q->rear)  return FALSE;
	e = Q->base[Q->front];
	Q->front = (Q->front + 1) % Q->maxSize;
	return e;
}
Status GetHead_Sq(SqQueue Q)//取队首元素
{
	int e;
	if (Q.front == Q.rear)//是否为空队列
		return ERROR;
	e = Q.base[Q.front];
	return e;
}
//顺序表初始化
Status InitList­_Sq(SqList *L, int size, int increment)
{
	if (L->length == NULL)
		return ERROR;
	L->length = 0;
}
Status Append­_Sq(SqList *L, ElemType e)//表尾插入元素
{
	if (L->length >=L->size )
	{
		printf("顺序表已满，不能插入！\n");
		return 0;
	}
	L->elem[L->length] = e;
	L->length++;
}
Status DeleteLast­_Sq(SqList *L, ElemType *e)//删除表尾元素
{
	if (L->length == 0)
		return ERROR;
	*e = L->elem[L->length - 1];   
	--L->length;  
	return OK;

}
int Search­_Sq(SqList L, ElemType e)//查找线性表中的元素e
{
	int i;
	if (L.length == NULL)
		return ERROR;
	for (i = 0; i < L.length; i++)
	{
		if (e == L.elem[L.length])
			return OK;
	}
	printf("表中无此元素");
	return FALSE;
}
Status InitList_L(struct LNode * L )//初始化链表
{
	if (NULL == (L = (struct LNode * )malloc(sizeof(struct LNode ))))
		return OVERFLOW;
	L->next = NULL;
	return OK;

}
Status CreatList_L(struct LNode * L, int n, ElemType *A)// 建立一个长度为n的单链表，数组A[]提供n个元素值

{
	struct LNode  *p ; struct LNode  *q;
	int i;
	if (-1 == InitList_L(L)) return OVERFLOW;
	p = L;
	for (i = 0; i < n; i++) { 
		q = MakeNode_L(A[i]);
		InsertAfter_L(p, q);
		p = q; 				 
	}
	return OK;

}
struct LNode * MakeNode_L(ElemType e)//创建节点
{
	struct LNode *p;
	p = (struct LNode *)malloc(sizeof(struct LNode *));
	if (p != NULL) p->data = e;
	return p;

}
Status InsertAfter_L(struct LNode *p, struct LNode *q)//插入新节点
{
	if (NULL == p || NULL == q) return ERROR;
	q->next = p->next;      
	p->next = q;           
	return OK;

}

LNode* Search_L(struct LNode * L, ElemType e)//查找元素e
{
	LNode *p;
	if (NULL == L)
		return ERROR;
	p=L->next;
	while (p != NULL && p->data != e)
		p=p->next;
	return p;
}
Status DeleteAfter_L(struct LNode *p, ElemType *e)//删除后继节点
{
	struct LNode *q;
	if (NULL == p || NULL == p->next) return ERROR;
	q = p->next;   p->next = q->next;   *e = q->data;
	free(q);
	return OK;
}


















