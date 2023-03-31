#include <stdio.h>
#include "my_stdio.h"

void print_memory_view(void* value, size_t type_size)
{
	int i;

	for (i = 1; i <= type_size; ++i) {
		printf("%02x ", *((unsigned char*)value + type_size - i));
	}

	printf("\n");
}

void print_memory_view_arr(void* value, size_t arr_size, size_t type_size)
{
	size_t arr_index;

	int type_index;

	for (arr_index = 0; arr_index < arr_size; arr_index++) {
		print_memory_view((unsigned char*)value + (type_size * arr_index), type_size);
		printf("\n");
	}
}

int is_include_arr(int* arr, size_t arr_size, int* ptr_arr, size_t ptr_arr_size)
{
	if (arr <= ptr_arr && ptr_arr + ptr_arr_size - 1 <= arr + arr_size - 1) {
		return 1;
	}
	else {
		return 0;
	}
}

int main(void)
{
	//short arr[] = { 1,2,3,4,5,6 };
	//int* ptr_arr = arr + 2;
	//size_t ptr_arr_cnt = 4;

	//int ds = is_include_arr(arr, sizeof(arr) / sizeof(arr[0]), ptr_arr, ptr_arr_cnt);
	//printf("%d\n", ds);

	//char a = 2;
	//short sh = 0x1234;

	//print_memory_view(&a, sizeof(a));
	//print_memory_view(&sh, sizeof(sh));

	//print_memory_view_arr(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]));

	int num = 0;
	char f = 0;

	set_debug_mode(TRUE);
	my_scanf("%d", &num);
	my_scanf("%c", &f);

	printf("%d\n%c", num, f);

	return 0;
}