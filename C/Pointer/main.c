#include <stdio.h>

void calculate_min_max(const int arr[], const size_t size, int* min, int* max)
{
	size_t i;
	int minvalue = arr[0];
	int maxvalue = arr[0];

	for (i = 1; i < size; ++i) {
		if (minvalue > arr[i]) {
       		minvalue = arr[i];
		}	
		
		if(maxvalue < arr[i]) {
			maxvalue = arr[i];
		}
	}
	
	*min = minvalue;
	*max = maxvalue;
}

void swap(int* num1, int* num2)
{
	int temp;
	int a = *num1;
	int b = *num2;
	
	temp = a;
	a = b;
	b = temp;
}

void change(int* num){
	*num = 20;
}

int main(void)
{
	/* int arr[2] = { 3, 5 };

	int min = 0;
	int max = 0;
	calculate_min_max(arr, sizeof(arr) / sizeof(arr[0]), &min, &max);
	
	printf("min : %d max : %d", min, max);	*/

	printf("%02x", *(unsigned char*)arr + i);
	return 0;
}
