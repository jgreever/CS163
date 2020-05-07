#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;


class node
{
    public:
        node();
        ~node();
        void push(node ** head, int some_data);
        void display_all(node * head);
        int data;
        node * next;
        node * head;
};

node::node()
{
    head = NULL;
    data = 0;
}

node::~node()
{
    node * current = head;
    while(!current)
    {
        next = current->next;
        delete current;
        current = next;
    }
    current = NULL;
}

void display_all(node * head)
{
    if(!head) return;
    display_all(head->next);
    cout << head->data << endl;
}

void push(node ** head, int some_data)
{
    node * temp = new node();
    temp->data = some_data;
    temp->next = (*head);
    (*head) = temp;
}

int main()
{
    /*
    //create a list and display back in order
    node * head = NULL;
    int some_data = 0;
    int flag = -1;
    while(flag != 2)
    {
        cout << "\nPlease type any number from 1 to 100: ";
        cin >> some_data;
        cin.ignore(100, '\n'); 
        push(&head, some_data);
        cout << "\nEnter another? 1 for Yes,  or 2 for No: ";
        cin >> flag;
        cin.ignore(100, '\n');
    }
    */



    display_all(head);
    return 0;
}
