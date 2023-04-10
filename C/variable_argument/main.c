#include <stdio.h>
#include <stdarg.h>

float all_add_float(const size_t count, ...)
{
	va_list arg_ptr;

	float result = 0;

	va_start(arg_ptr, count);
	{
		size_t i;

		for (i = 0; i < count; ++i) {
			// 더블로 읽어오는 이유
			// 8바이트로 메모리 저장되었는데 4바이트로 읽어와서 안됨
			result += va_arg(arg_ptr, double);
		}
	}
	va_end(arg_ptr);

	return result;
}

int all_add_int(const size_t count, ...)
{
	va_list arg_ptr;

	int result = 0;

	va_start(arg_ptr, count);
	{
		size_t i;

		for (i = 0; i < count; ++i) {
			result += va_arg(arg_ptr, int);
		}
	}
	va_end(arg_ptr);

	return result;
}

int main(void)
{
	float f = all_add_float(2, 1.3111f, 2.0);
	int i = all_add_int(5, 3456, 124, 4857, 698745, 3);

	printf("float : %f\n", f);
	printf("int : %d\n", i);

	system("pause");

	return 0;
}