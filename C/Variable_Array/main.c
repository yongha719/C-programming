#include <stdio.h>

/* 가변 배열 순회 함수 */
void print_arr(const int* ptr[], size_t size, size_t lengths[])
{
	size_t i;
	size_t j;

	for (i = 0; i < size; ++i) {
		for (j = 0; j < lengths[i]; ++j) {
			/* 머리가 띵 */
			/* 포인터 연산버리고 배열쓰자 */
			/* printf("%d ", *(*(ptr + i) + j)); /* ptr[i][j] */
		}
		printf("\n");
	}
}

void print_2d_arr(int arr[][4], size_t height)
{
	size_t i;
	size_t j;

	for (i = 0; i < height; ++i) {
		for (j = 0; j < 4; ++j) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void print_2d_arr_width_height(int(*arr)[5], size_t width, size_t height)
{
	int* ptr_arr[5];

	size_t feqouh;

	size_t i;
	size_t j;

	for (feqouh = 0; feqouh < 5; ++feqouh) {
		ptr_arr[feqouh] = (int*)arr + feqouh;
	}

	printf("print_2d_arr_width_height\n");

	for (i = 0; i < height; ++i) {
		for (j = 0; j < width; ++j) {
			printf("%d ", *(*(ptr_arr + i) + j));
		}
		printf("\n");
	}
}

int main(void)
{
	/* 선언 정의 잘하자..? */

	/* 배열 포인터 */
	int integer;

	int arr1[2] = { 4,5 }; /*  *(1 + arr)  */
	int arr2[5] = { 12,35247,123,4756,17 };
	int arr3[4] = { 865,97,654,875 };
	int const* ptr_arr[3];

	size_t lengths[] = { 2,5,4 };

	int arr_2d[][5] = {
		{ 3, 2, 1, 4,1 },
		{ 17, 21, 71, 185,3 },
		{ 157, 378, 157, 512498, 0 },
		{ 17, 38, 17, 51298, 91 }
	}; /*  *(1 + *(1 + arr))  */

	int num = 1[arr_2d][1];

	size_t width = sizeof(arr_2d[0]) / sizeof(arr_2d[0][0]);
	size_t height = sizeof(arr_2d) / sizeof(arr_2d[0]);

	int(*arr_ptr)[3] = arr_2d;

	arr_ptr[1][1] = *(arr_2d[1] + 1);

	printf("width : %d\nheight : %d\n", width, height);

	printf("num : %d\n", num);

	print_arr(ptr_arr, 3, lengths);

	print_2d_arr_width_height(arr_2d, width, height);

	printf("\n");

	print_2d_arr(arr_2d, 3);

}
