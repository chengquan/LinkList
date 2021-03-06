// LinList.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
typedef struct Linklist
{
	Linklist *next;
	float *data;
};
Linklist* revert(Linklist *&head);
int main()
{
	Linklist* link = new Linklist();
	link->data = new float[100];
	link->data[0] = 1;
	link->next = new Linklist();
	link->next->data = new float[100];
	link->next->data[0] = 2;
	link->next->next = new Linklist();
	link->next->next->data = new float[100];
	link->next->next->data[0] = 3;
	cout << link->data[0] << link->next->data[0] << link->next->next->data[0];
    //链表反转
	revert(link);
	cout << link->data[0] << link->next->data[0] << link->next->next->data[0];
    cout << "Hello World!\n"; 
}

Linklist* revert(Linklist *&head)
{
	Linklist* a,* b,* c;
	a = head;
	b = a->next;
	while(b)
	{
		c = b->next;
		b->next = a;
		a = b;
		b = c;
	}
	head = a;
	return head;
}