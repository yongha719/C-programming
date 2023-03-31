#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "digitech.h"

/* 이렇게 만들면 메모리를 쓰지 않고 10에 이름만 지어주는 것처럼 됨 */
enum
{
	DEFALUT_DEPARTMENTS_SIZE = 10
};

const char* YOUR_MEMORY_BOOM = "Your memory is about to explode. Do you want me to explode it?\n";

department_t* departments;
int departments_count;

int departmnets_capacity = DEFALUT_DEPARTMENTS_SIZE;

void init_departments_malloc()
{
	departments = malloc(sizeof(department_t) * DEFALUT_DEPARTMENTS_SIZE);

}

void print_departments()
{
	int department_index;

	printf("Departments===========================\n");

	for (department_index = 0; department_index < departments_count; ++department_index)
		printf("%s\n", departments[department_index].department_name);

	printf("you want next press any key");
	
	_getch();
	system("cls");
}

void print_department_students(department_t department)
{

}

void create_department_malloc(char* department_name)
{
	if (departmnets_capacity <= departments_count) {

		departmnets_capacity *= 2;
		department_t* new_departments = realloc(departments, sizeof(department_t) * departmnets_capacity);

		if (new_departments == NULL) {
			printf(YOUR_MEMORY_BOOM);
			return;
		}

		departments = new_departments;
	}

	department_t* now_department = &departments[departments_count++];

	strcpy(now_department->department_name, department_name);
	now_department->department_students = NULL;

	print_departments();
}

void release_department()
{
	free(departments);
}
