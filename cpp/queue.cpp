#include <iostream>

int queue[100];
int front;
int rear;

void push(int data)
{
	queue[rear] = data;
	++rear;
}

int pop()
{
	int i = front;
	++front;
	return queue[i];
}

int main()
{
	push(100);
	push(200);
	
	std::cout <<"1st pop() : "<< pop() <<std::endl;
	
	push(300);
	
	std::cout <<"2nd pop() : "<< pop() <<std::endl;
	std::cout <<"3rd pop() : "<< pop() <<std::endl;
	
	return 0;
}
