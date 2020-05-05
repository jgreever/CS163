 /* stackandqueue.cpp
  *
 * Justin Greever
 * CS163
 * 4/24/2020
 * 
 * Program #2 - Stacks and Queues, making a package management program
 * 
 * TODO: fill out top part
 */

#include "stackandqueue.h"

stack::stack()
{
    rear = NULL;
    top_index = 0;
}

stack::~stack()
{
    while(!head)
        stack::pop();
}

int stack::push(const package_entry & to_add)
{
    if(!rear)
    {
        rear = new s_node;
        rear->entry = new package_entry[MAX];
        rear->next = NULL;
        top_index = 0;
    }
    if(top_index == MAX)
    {
        s_node *temp = rear; rear = new s_node;
        rear->entry = new package_entry[MAX];
        rear->next = temp;
        top_index = 0;
    }
    if(rear->s_entry[top_index].copy_entry(to_add))
        ++top_index;
    else return 0;
    return 1;
}

int stack::pop(void)
{
    if(!rear) return 0;
    s_node * hold = rear->next;
    if(!top_index)
    {
        if(rear->s_entry)
            delete [] rear->s_entry;
        delete rear;
        rear = hold;
        top_index = MAX;
    }
    if(rear) top_index = MAX;
    else top_index = 0;
    --top_index;
    return 1;
}

int stack::peek(package_entry & found_at_top)
{
    if(!rear) return 0;
    else cout << "\nTop of the stack is: " << rear->s_entry;
    return 1;
}

int display()
{

    return 1;
}
