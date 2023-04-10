#pragma once

struct Node
{
	Node* prevnode;
	Node* nextnode;
	int data;
};

void Add(Node* node);
void Remove(int node);
int Length();
