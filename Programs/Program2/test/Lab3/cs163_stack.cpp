#include "cs163_stack.h"

int stack::push(const journal_entry & to_add)
{
    if(!head)
    {
        head = new node;
        head->entries = new journal_entry[MAX];
        head->next = NULL;
        top_index = 0;
    }
    if(top_index == MAX)
    { 
        node *temp = head; head = new node;
        head->entries = new journal_entry[MAX];
        head->next = temp;
        top_index = 0;
    }
    if(head->entries[top_index].copy_entry(to_add))
        ++top_index;
    else 
        return 0;
    return 1;
}

int stack::pop (void)
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

        if(head) 
            top_index = MAX;
        else 
            top_index = 0;
    }
    --top_index;
    return 1;
}

int stack::peek(journal_entry & found_at_top) const
{
    if(!head) 
        return 0;
    else 
        std::cout << "\nTop of the stack is: " << head->entries;
    return 1;
}
