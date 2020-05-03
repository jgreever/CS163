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
#include "package.h" 

struct node
{
    package_entry entry;
    node * next;
};

const int MAX = 5; 

class stack
{
    public:
        stack();
        ~stack();
        int push(const package_entry & to_add);
        int pop(void);
        int peek(package_entry & found_at_top) const;
        int display(void) const;
    
    private:
        node * head;
        int top_index;  

};

struct q_node
{
    package_entry entry;
    q_node * next;
};

class queue
{
    public:
        queue();
        ~queue();
        int new_entry();
        int copy_entry();
        int retrieve();
        int retrieve(package_entry & found) const;
        int display(void) const;
    
    private:
        char * to_address1;
        char * to_address2;
        char * to_city;
        char * to_state;
        char * to_zipcode;
        q_node * rear;
};

