#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"
#include "sort.h"

int main(void)
{	
	node_t nodes[70];

	int i;

	for (i = 0; i < 70; ++i) {
		nodes[i].data = (i + 10) * 132328 % 1321234567;
		nodes[i].next_node = NULL;
		add_node(&nodes[i]);
	}

	print_all_node();

	
	int i;

	student_t sts[3];

	student(&sts[0],18, 92, "iowehr");
	student(&sts[1],18, 92, "ilwehr");
	student(&sts[2],18, 92, "iowehr");

	for (i = 0; i < 3; ++i) {
		printf("나의이이ㅣ : %d 이름 : %s 점수 : %d\n", sts[i].age, sts[i].name, sts[i].score);
	}
}

void student(student_t* st, unsigned char age, unsigned int score, char* name)
{
	st->age = age;
	st->score = score;
	st->name = name;

	return st;
}
