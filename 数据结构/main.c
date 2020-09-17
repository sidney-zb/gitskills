#include<stdio.h>
#include<stdlib.h>
#include"status.h"
#include<malloc.h>
#include<time.h>
int main()
{	int n,a,b,i,c,k,m,l;
    srand((unsigned)time(NULL));
	struct LNode * L;
    SqStack  S = { NULL,0,0,0 };	
	SqStack * p;
	p = &S;
	SqQueue Q = {NULL,0,0,0};
	SqQueue * q;
	q = &Q;
	l = 0;
	printf("请选择你要的操作:\n");
	printf("1.顺序栈 2.顺序队列 ");
	scanf_s("%d", &n);

	switch (n)
	{
	case 1: 	
		printf("请输入要创建的栈的长度n： \n");
		scanf_s("%d", &a);
		InitStack_Sq(p, a, 5);
		printf("已创建长度为%d的栈\n", a);
		printf("请输入要入栈元素的个数:  ");
		scanf_s("%d",&b);
		
		for (i = 0; i < b; i++)
		{
			Push_Sq(p,(rand()%10));
		}
		printf("\n");
		printf("请选择你要进行的操作   1.元素出栈 2.取栈顶元素\n");
		scanf_s("%d", &l);
		{switch (l) {

		case 1:	printf("出栈操作:\n");
			Pop_Sq(p);
			break;
		case 2:printf("栈顶元素为 %d \n", p->elem[p->top-1]);
			break;
		}

		}
	
		break;
	case 2:
		srand((unsigned)time(NULL));
		printf("请输入要创建的队列的长度n： \n");
		scanf_s("%d", &k);
		InitQueue_Sq(q, k);
		printf("已创建长度为%d的队列\n", k);
		printf("请输入要入队元素的个数:  ");
		scanf_s("%d", &m);
		for (i = 0; i < m; i++)
		{
			EnQueue_Sq(q, (rand()%10));
		}
		printf("\n");
		printf("取队首元素：%d\n", GetHead_Sq(Q));
		printf("出队元素为 %d\n", DeQueue_Sq(q));
		break;
	case 3:





		break;
	case 4:






		break;
}
	system("pause");
	return 0;
	
}