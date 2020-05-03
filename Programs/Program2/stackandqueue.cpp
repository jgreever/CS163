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

int stack::push(const package_entry & to_add)
{
    if(!head)
    {
        head = new node;
        head->entry = new package_entry[MAX];
        head->next = NULL;
        top_index = 0;
    }
    if(top_index == MAX)
    {
        node *temp = head; head = new node;
        head->entry = new package_entry[MAX];
        head->next = temp;
        top_index = 0;
    }
    if(head->entries[top_index].copy_entry(to_add))
        ++top_index;
    else return 0;
    return 1;
}

int stack::pop(void)
{
    if(!head) return 0;
    node * hold = head->next;
    if(!top_index)
    {
        if(head->entries)
            delete [] head->entries;
        delete head;
        head = hold;
        top_index = MAX;
    }
    if(head) top_index = MAX;
    else top_index = 0;
    --top_index;
    return 1;
}

int stack::peek(package_entry & found_at_top)
{

    return 1;
}

int display()
{

    return 1;
}
