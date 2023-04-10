#include "DoubleLinkedList.h"
#include <assert.h>

Node* head = nullptr;
Node* tail = nullptr;

int size = 0;

void Add(Node* node)
{
	if (head != NULL)
	{
		tail->nextnode = node;
		node->prevnode = tail;
		tail = node;
	}
	else {
		head = node;
		tail = node;
	}

	size++;
}

//template <typename T>
void Remove(int data)
{
	Node* removenode = head;

	for (int i = 0; i < size; i++) {
		if (removenode->data == data)
			break;
		removenode = removenode->nextnode;
	}

	removenode->prevnode->nextnode = removenode->nextnode;
	size--;
}

int Length()
{
	return size;
}
