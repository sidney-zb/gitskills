#include<stdio.h>
#include<stdlib.h>
#include"status.h"
#include<malloc.h>
#include<time.h>
int main()
{	int n,a,b,i,c,k,m;
    srand((unsigned)time(NULL));
	struct LNode * L;
    SqStack  S = { NULL,0,0,0 };	
	SqStack * p;
	p = &S;
	SqQueue Q = {NULL,0,0,0};
	SqQueue * q;
	q = &Q;

	printf("��ѡ����Ҫ�Ĳ���:\n");
	printf("1.˳��ջ 2.˳����� 3.˳��� 4.����:\n");
	scanf_s("%d", &n);

	switch (n)
	{
	case 1: 	
		printf("������Ҫ������ջ�ĳ���n�� \n");
		scanf_s("%d", &a);
		InitStack_Sq(p, a, 5);
		printf("�Ѵ�������Ϊ%d��ջ\n", a);
		printf("������Ҫ��ջԪ�صĸ���:  ");
		scanf_s("%d",&b);
		
		for (i = 0; i < b; i++)
		{
			Push_Sq(p,(rand()%10));
		}
		printf("\n");
		printf("\n������Ҫ���ҵĵ�n��Ԫ��\n");
		scanf_s("%d", &c);
		Get_Sq(p, c);
		printf("��ջ����:\n");
		Pop_Sq(p);
		break;
	case 2:
		srand((unsigned)time(NULL));
		printf("������Ҫ�����Ķ��еĳ���n�� \n");
		scanf_s("%d", &k);
		InitQueue_Sq(q, k);
		printf("�Ѵ�������Ϊ%d�Ķ���\n", k);
		printf("������Ҫ���Ԫ�صĸ���:  ");
		scanf_s("%d", &m);
		for (i = 0; i < m; i++)
		{
			EnQueue_Sq(q, (rand()%10));
		}
		printf("\n");
		printf("ȡ����Ԫ�أ�%d\n", GetHead_Sq(Q));
		printf("����Ԫ��Ϊ %d\n", DeQueue_Sq(q));
		break;
	case 3:





		break;
	case 4:






		break;
}
	system("pause");
	return 0;
	
}