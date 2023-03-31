#ifndef DIGITECH_H
#define DIGITECH_H

#include "student.h"

typedef struct department department_t;

struct department 
{
	char department_name[128];
	int student_count;
	student_t* department_students;
};

void init_departments_malloc();
void print_departments();
void print_department_students(department_t department);
void create_department_malloc(char* department_name);
void release_department();

#endif 
