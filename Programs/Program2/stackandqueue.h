/* stackandqueue.h
 *
 * Justin Greever
 * CS163
 * 4/24/2020
 * 
 * Program #2 - Stacks and Queues, making a package management program
 * 
 * TODO: fill out top part
 */
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

static const int MAX = 5;

/*
struct d_address
{
    char * to_address1;
    char * to_address2;
    char * to_city;
    char * to_state;
    char * to_zipcode;

};
 */

struct package
{
    char * sender_name;
    char * sender_phone;
    int package_id_num;
    char * to_name;
    //d_address d_addr;
    char * to_address1;
    char * to_address2;
    char * to_city;
    char * to_state;
    char * to_zipcode;
};

struct q_node
{
    //d_address d_addr;
    package q_entry;
    q_node * next;
};

struct s_node
{
    package s_entry[MAX];
    s_node * next;
};

class stack
{
    public:
        stack();
        ~stack();
        int push(const package & to_add);
        int pop(void);
        int peek(package & found_at_top) const;
        int display(void) const;

    private:
        package s_entry[MAX];
        s_node * rear;
        int top_index;
};

class queue
{
    public:
        queue();
        ~queue();
        int new_entry();
        int copy_entry(const package & to_add);
        int retrieve();
        int retrieve(package & found) const;
        int display(void) const;

    private:
        q_node * head;
//TODO: make ADT for customer address
        //d_address d_addr;
};

