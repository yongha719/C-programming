#include <string.h>
#include "sort.h"

int student_sort(const void* left, const void* right)
{
	student_t st1 = *(student_t*)left;
	student_t st2 = *(student_t*)right;

	if (st1.score == st2.score)
	{
		if (st1.age == st2.age)
		{
			return strcmp(st1.name, st2.name);			
		}

		return st1.age - st2.age;
	}

	return st2.score - st1.score;
}
