#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct node node_t;

struct node
{
	int data;
	node_t* next_node;
};

void add_node(node_t* new_node);
void print_all_node(void);

#endif
