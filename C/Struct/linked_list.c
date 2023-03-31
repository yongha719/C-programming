#include <stdio.h>
#include "linked_list.h"

static node_t first_node = { -1, NULL };
static node_t* now_node = &first_node;

void add_node(node_t* new_node)
{
	now_node->next_node = new_node;
	now_node = new_node;
}

void print_all_node(void)
{
	int i = 1;

	node_t* print_node = first_node.next_node;

	while (print_node != NULL) {
		printf("%d번째 노드의 값은 %d입니다.\n", i++, print_node->data);
		print_node = print_node->next_node;
	}
}


