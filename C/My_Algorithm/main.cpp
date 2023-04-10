#include <assert.h>
#include <iostream>
#include <string.h>

#include "DoubleLinkedList.h"

using namespace std;

int main()
{
	int num;

	cin >> num;

	Node* node = (Node*)malloc(sizeof(Node));

	node->data = num;
	Add(node);


	return 0;
}