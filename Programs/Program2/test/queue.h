#include "stack.h"

struct q_node
{
    char * d_address[5];
    package n_package;
    q_node * next;
};

class queue
{
    public:
        queue(void);
        ~queue(void);
        int display(void) const;
        int enqueue(const package & to_add);
        int dequeue();

    private:
        q_node * rear;
};
