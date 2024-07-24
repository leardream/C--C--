#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void initList(List *pList)
{
	pList->ptr = malloc(sizeof(Node));
	//pList->ptr->data = ???; // dummmy
	pList->ptr->next = NULL;
}

void cleanupList(List *pList)
{
	Node *p = pList->ptr;
	while (p ) {
		Node *tmp = p;
		p = p->next;
		
		free(tmp);
	}
}

void printList(const List *pList)
{
	Node *p = pList->ptr->next;
	printf("[");
	while (p ) {
		printf("%d", p->data);
		printf( (p->next ) ? " , " : "");
		p = p->next;
	}
	printf("]\n");
}

void insertFirstNode(List *pList, int data)
{
	Node *p = malloc(sizeof(Node));
	p->data = data;
	p->next = pList->ptr->next;
	pList->ptr->next = p;
}

void insertNode(List *pList, int prevData, int data)
{
	Node *p = pList->ptr->next;
	while (p ) {
		if (p->data == prevData) {
			break;
		}
		p = p->next;	
	}
	
	if (p ) {
		Node *p2 = malloc(sizeof(Node));
		p2->data = data;
		p2->next = p->next;
		p->next = p2;
	} else {
		//	
	}
}

void deleteNode(List *pList, int data)
{
	Node *p1 = pList->ptr->next;
	Node *p2 = pList->ptr;
	
	while (p1 ) {
		if (p1->data == data)
			break;
			
		p1 = p1->next;
		p2 = p2->next;
	}
	
	if (p1 ) {
		p2->next = p1->next;
		free(p1);
		
	} else {
		//
	}
}
