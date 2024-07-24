#include "queue.h"

int queue[100];
int front = 0;
int rear = 0;

void push(int data)
{
	queue[rear] = data;
	++rear;
}

int pop(void)
{
	int i = front;
	++front;
	return queue[i];
}

