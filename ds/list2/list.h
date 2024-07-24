#ifndef LIST_H
#define LIST_H

typedef struct node {
	int data;
	struct node *next;
} Node;

typedef struct {
	Node *ptr;
} List;

void initList(List *pList);
void cleanupList(List *pList);

void printList(const List *pList);

void insertFirstNode(List *pList, int value);
void insertNode(List *pList, int prevData, int value);
void deleteNode(List *pList, int data);

#endif
