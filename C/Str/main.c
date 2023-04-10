#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <string.h>

#define REMAIN_STR_LEN(str) (sizeof(str) - (my_strlen(str) + 1))
#define LENGTH (5)

char* gets(char* str);

size_t my_strlen(const char* str)
{
	const char* eos = str;

	while (*eos++);

	return(eos - str - 1);
}

int compare_string(const char* str1, const char* str2)
{
	while (*str1 != '\0' || *str2 != '\0')
	{
		if (*str1 < *str2) {
			return -1;
		}
		else if (*str1 > *str2) {
			return 1;
		}
		else {
			str1++;
			str2++;
		}
	}

	return 0;
}

void my_strcpy(char* dest, const char* src)
{
	while (1)
	{
		*dest = *src;


		if (*src == '\0') {
			break;
		}

		dest++;
		src++;
	}
}

int main(void)
{
	/*char* str = "helloddd";

	assert(my_strlen(str) == 8);

	str = "hello World";
	assert(my_strlen(str) == 11);

	str = "";
	assert(my_strlen(str) == 0);


	str = "31212";
	char dest[15];

	my_strcpy(dest, str);
	assert(my_strlen(dest) == my_strlen(str));
	printf("%s", dest);

	assert(compare_string("ABCD", "ABCE") == -1);
	assert(compare_string("ABCD", "abcd") == -1);
	assert(compare_string("AC", "ABCD") == 1);
	assert(compare_string("AB", "ABCD") == -1);
	assert(compare_string("AB", "AB") == 0);
	assert(compare_string("a", "") == 1);*/

	/* CSV======================
	char str[] = "\"result\",\"idx\",\"member_type\",\"member_gubun\",\"True\",\"18\",\"SEL\",\"kor\"";

	char* r = strtok(str, "\"");

	char* re[8];

	int i = 0;

	while (r != NULL)
	{
		re[i++] = r;
		r = strtok(NULL, "\",");
	}

	for (int i = 0; i < 4; i++) {
		printf("%s : %s\n", re[i], re[i + 4]);
	}*/

	/*  JSON==================
	char str[] = "{\"result\":true,\"idx\":18,\"member_type\":\"SEL\",\"member_gubun\":\"kor\"}";

	char* token = strtok(str, "{\"");
	int i = 0;

	char* result[8];

	while (token != NULL) {
		result[i++] = token;
		token = strtok(NULL, "\":,}");
	}

	for (int i = 0; i < 8; i += 2) {
		printf("%s : %s\n", result[i], result[i + 1]);
	} */

	/*char str1[20] = "Hello";

	char str2[8];

	strcat(str1, " World");

	strncpy(str2, str1, 7);
	str2[7] = '\0';

	strncat(str1, "1", REMAIN_STR_LEN(str1));
	strncat(str2, "2", REMAIN_STR_LEN(str2));

	printf("%s\n", str1);
	printf("%s\n", str2);

	char* egurh = "  Dec   Hex Char      ";
	char str[255] = "";
	int i;

	printf("%s|%s|%s|%s\n", egurh, egurh, egurh, egurh);

	for (i = 0; i < 128; i++) {
		//sprintf(str, "%5d | %2x |  %c      ", i, i, i);
		printf("%5d | %2x |  %c      \n", i, i, i);
		putchar(i);
	}*/

	//char str[LENGTH];

	//while (fgets(str, LENGTH, stdin) != NULL) {
	//	printf("%s",str);
	//}
	

	int num;
	while (1) {
		if (scanf("%d", &num) == 0) {
			fprintf(stderr, "Error\n");
			continue;
		}

		if (num == 0) {
			break;
		}

		printf("result : %d\n", num);
	}

}

/* 
한 문자씩 읽기 

getchar 입력받은 문자를 int로 반환
실패했을 때 EOF 반환
윈도우에선 ctrl + z 

한 줄씩 읽기 

gets 위험위험
strcpy 와 같은 이유로 메모리 스톰프를 일으킬 수 있음
매개변수로 char*을 받고 거기에 입력받은 한줄을 대입해줌
실패시 마찬가지로 EOF반환
마지막에 '\0'을 넣어줌
개행문자를 안 넣어줌
입력 스트림에는 들어오지만.
한 줄에 해당하는 문자에는 개행문자가 포함이 안되기 때문.......

fgets 
매개변수로 char*, count, 스트림을 받음
이 함수에도 마지막에 '\0'를 넣어주기 때문에
char*에 count -1 만큼 문자를 대입해줌
개행문자를 넣어줌
count에 따라 한 줄이더라도 여러번 받을 수 있기 때문에

한 줄에서 여러 데이터 읽기 ex) json, csv, 문자열 포맷들
이진 데이터 

*/