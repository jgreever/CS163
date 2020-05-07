#include <iostream>
#include <cctype>
#include <cstring>

const int MAX = 5

struct stack
{
    char pkg_info[MAX];
    stack * next;
};

struct queue
{
    char * delivery_addr;
    stack a_stack;
    queue * next;
};


