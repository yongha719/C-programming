#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>
#include <Windows.h>

#include "digitech.h";

const char* WELCOME = "Welcome to SDHS!!  ===================\n";
const char* CREATE_DEPARTMENT = "1. Create Department\n";
const char* DEPARTMENTS = "2. Departments\n";
const char* EXIT = "0. Program Exit\n";
const char* LINE = "======================================\n";
const char* YOUR_INPUT = "Your Input : ";
const char* INPUT_DEPARTMENT_NAME = "input department name : ";

const char* ERROR_OVERFLOW_DEPARTMENT_COUNT = "";

char input;
char inputbuffer[128];

void swap(int** lhs, int** rhs)
{
	void* temp = *lhs;
	*lhs = *rhs;
	*rhs = temp;
}

void print_main_ui()
{
	printf(WELCOME);
	printf(CREATE_DEPARTMENT);
	printf(DEPARTMENTS);

	printf(EXIT);
	printf(LINE);
	printf(YOUR_INPUT);

	if (fgets(inputbuffer, 128, stdin) != NULL) {
		sscanf(inputbuffer, "%c", &input);
	}
}

void print_create_department_ui()
{
	char department_name[128];

	printf(INPUT_DEPARTMENT_NAME);

	if (fgets(inputbuffer, 128, stdin) == NULL) {
		system("cls");
		puts("error input");
		return;
	}
	sscanf(inputbuffer, "%s", department_name);

	create_department_malloc(department_name);
}

int main(void)
{
	init_departments_malloc();

	while (1)
	{
		print_main_ui();

		switch (input)
		{
		case '0':
			goto exit;
		case '1':
			print_create_department_ui();
			break;
		case '2':
			assert(0);
			break;
		default:
			system("cls");
			break;
		}
	}

exit:
	release_department();

	return 0;
}

