#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int info;
	struct node* next;
}N;
N* init()
{
	return NULL;
}
N* creat(N* head, int n)
{
	int i, x;
	N *p, *q = NULL;
	for (i = 1; i <= n; i++)
	{
		scanf_s("%d", &x);
		p = (N*)malloc(sizeof(N));
		p->info = x;
		p->next = NULL;
		if (!head)
		{
			head = p;
			q = p;
		}
		else
		{
			q->next = p;
			q = p;
		}
	}
	return head;
}
void display(N* head)
{
	N *p = head;
	while (p)
	{
		if (p->next)
			printf("%d ", p->info);
		else
			printf("%d\n", p->info);
		p = p->next;
	}
}
N *insert(N* head, int x)
{
	N *p, *q = head, *qq = head->next;
	p = (N*)malloc(sizeof(N));
	p->info = x;
	if (p->info <= head->info)
	{
		p->next = head;
		head = p;
		return head;
	}
	while (qq)
	{
		if (p->info >= q->info && p->info <= qq->info)
		{
			p->next = qq;
			q->next = p;
			break;
		}
		else
		{
			q = qq;
			qq = qq->next;
		}
	}
	if (!qq)
	{
		q->next = p;
		p->next = NULL;
	}
	return head;
}
/*int main()
{
	N *h;
	int m, n;
	while (scanf_s("%d%d", &n, &m) != EOF)
	{
		if (n == 0 && m == 0)	return 0;
		h = init();
		h = creat(h, n);
		h = insert(h, m);
		display(h);
	}
	return 0;
}*/