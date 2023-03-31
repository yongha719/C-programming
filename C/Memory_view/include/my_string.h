#ifndef MY_STRING_H
#define MY_STRING_H

#include <stdio.h>

#include "utility.h"

bool_t is_number(char ch);
bool_t is_empty(char ch);

int make_int(const char* str);
float make_float(const char* str);
double make_double(const char* str);

#endif
