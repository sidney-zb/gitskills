#include <stdio.h>
#include <stdlib.h>
#ifndef _STATUS_H_
#define _STATUS_H_

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define OVERFLOW -1
typedef int Status;
typedef int ElemType;
typedef struct {
	ElemType * elem;
	int top;
	int size;
	int increment;
}SqStack;
//栈操作
Status InitStack_Sq(SqStack *S, int size, int inc) ;
Status Push_Sq(SqStack *S, ElemType e) ;
Status Pop_Sq(SqStack *S);
Status Get_Sq(SqStack *S, int n);

typedef struct {
          ElemType  *base;  // 存储空间的基址
		  int front;// 队头位标
          int rear;// 队尾位标，指示队尾元素的下一位置
          int maxSize;   // 最大长度
     } SqQueue;
//队列操作
Status InitQueue_Sq(SqQueue *Q, int size);
Status EnQueue_Sq(SqQueue *Q, ElemType e);
Status DeQueue_Sq(SqQueue *Q);
Status GetHead_Sq(SqQueue Q);
//顺序表
typedef struct {
	ElemType * elem;
	int length;
	int size;
	int increment;
}SqList;
//顺序表操作
Status InitList­_Sq(SqList *L, int size, int increment);
Status Append­_Sq(SqList *L, ElemType e);
Status DeleteLast­_Sq(SqList *L, ElemType *e);
Status Search­_Sq(SqList L, ElemType e);
//链表
typedef struct LNode{
	ElemType data;
	struct LNode * next;
} LNode;

Status InitList_L(struct LNode * L);
struct LNode * MakeNode_L(ElemType e);
struct LNode * Search_L(struct LNode * L, ElemType e);
Status InsertAfter_L(struct LNode *p, struct LNode *q);
Status DeleteAfter_L(struct LNode *p, ElemType *e);
Status CreatList_L(struct LNode * L, int n, ElemType *A);

#endif // !_STATUS_H_

