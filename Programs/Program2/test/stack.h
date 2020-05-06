//#include "queue.h"
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

struct package
{
    char * s_name;
    char * s_phone;
    int package_id;
    char * d_name;
    char * d_address;
};

struct node
{
    package * n_package;
    node * next;
};

const int MAX = 5;

class stack
{
    public:
        stack(void);
        ~stack(void);
        bool is_empty() const;
        int display(void) const;
        int peek(package & at_top) const;
        int push(const package & to_add);
        int pop(void);

    private:
        node * head;
        int top_index;
};
