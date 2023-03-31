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
			// 더블로 읽어오는 이유 영상 1시간 40분 참고
			// 8바이트로 메모리 저장되었는데 4바이트로 읽어와서 안됨
			result += va_arg(arg_ptr, double);
		}
	}
	va_end(arg_ptr);

	return result;
}

double 부ㅔ(const int not, ...)
{
	va_list arg_ptr;

	double result = 0;

	va_start(arg_ptr, not);
	{
		result = va_arg(arg_ptr, double);
		//printf("%d", va_arg(arg_ptr, unsigned short));
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
	//float f = all_add_float(2, 1.0f, 2.0);
	//int i = all_add_int(5, 3456, 124, 4857, 698745, 3);

	//부ㅔ(0, 0x3412, 0x7856);

	//printf("float : %f\n", f);
	//printf("int : %d\n", i);

	return 0;
}