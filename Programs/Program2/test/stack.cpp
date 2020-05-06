#include "stack.h"

bool stack::is_empty() const
{
    return head == NULL;
}

int stack::push(const package & to_add)
{
    if(!head)
    {
        head = new node;
        head->n_package = new package[MAX];
        head->next = NULL;
        top_index = 0;
    }
    if(top_index == MAX)
    {
        node * temp = head;
        head = new node;
        head->n_package = new package[MAX];
        head->next = temp;
        top_index = 0;
    }
    if(head->n_package[top_index].copy_entry(to_add))
        ++top_index;
    else
        return 0;
    return 1;
}

int stack::pop(void)
{
    if(!head) return 0;
    node * hold = head->next;
    if(!top_index)
    {
        if(head->n_package)
            delete [] head->n_package;
        delete head;
        head = hold;
        top_index = MAX;

        if(head)
            top_index = MAX;
        else top_index = 0;
    }
    --top_index;
    return 1;
}

int stack::peek(package & found_at_top) const
{
    if(!head)
        return 0;
    else
        cout << "\nTop of the stack is: " << head->n_package;
    return 1;
}

int stack::display(void) const
{
    if(!head) return 0;
    if(head)
    {
        node * temp = head;
        cout << "\nStack contains the following: " << temp->n_package->s_name << " ";
        temp = temp->next;
    }
    return 1;
}
