#ifndef SORT_H
#define SORT_H

typedef struct student student_t;

struct student
{
    unsigned char age;
    unsigned int score;
    char* name;
};

int student_sort(const void* left, const void* right);
#endif
