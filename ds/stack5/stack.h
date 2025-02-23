#ifndef STACK_H
#define STACK_H

typedef struct {
	//int *pArr;
	void *pArr;
	int eleSize;
	int size;
	int tos;
} Stack;

void initStack(Stack *ps, int size, int eleSize);
void cleanupStack(Stack *ps);

void push(Stack *ps,const void *pData);
//int pop(Stack *ps);
//void pop(Stack *ps, int *pRe);
void pop(Stack *ps, void *pRe);

#endif
