#include "cs163_queue.h"

int queue::enqueue(const journal_entry & to_add)
{
    if(!rear)
    {
        rear = new q_node;
        rear->next = rear;
    }
    q_node * temp = rear->next;
    rear->next = new q_node;
    rear = rear->next;
    rear->next = temp;
    int success = rear->entry.copy_entry(to_add);
    return success;
}

int queue::dequeue ()
{
    if(!rear) return 0;
    if(rear->next == rear)
    {
        delete rear;
        rear = NULL;
    }
    else
    {
        q_node * temp = rear->next;
        rear->next = temp->next;
        delete temp;
    }
    return 1;
}

