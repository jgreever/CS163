#include <iostream>
using namespace std;

struct s_node
{
    int data;
    s_node *next;
};

s_node *top = NULL;

bool isempty()
{
    if(top == NULL) return true;
    else return false;
}

void push(int value)
{
    s_node *temp = new s_node();
    temp->data = value;
    temp->next = top;
    top = temp;
}

void pop()
{
    if (isempty())
        cout << "\nStack is Empty\n";
    else
    {
        s_node *temp = top;
        top = top->next;
        delete(temp);
    }
}

void peek()
{
    if (isempty())
        cout << "\nStack is Empty\n";
    else
        cout << "\nTop of the stack is: " << top->data << "\n";
}

void displayStack()
{
    if (isempty())
        cout << "\nStack is Empty\n";
    else
    {
        s_node *temp = top;
        while(temp != NULL)
        {   cout << "\nStack contents: " << temp->data;
            temp = temp->next;
        }
        cout << "\n";
    }
}

int main()
{

    int choice;
    int flag = 1;
    int value = 0;

    while(flag == 1)
    {
        cout << "\n Push to stack, type 1\n Pop from the stack, type 2\n Peek at the stack, type 3\n Display the stack contents, press 4\n Exit the program, type 5\n";
        cout << "\n";
        cin >> choice;
        
        switch(choice)
        {
            case 1: cout << "\nEnter Value: ";
                    cin >> value;
                    push(value);
                    break;
        
            case 2: pop();
                    break;
            
            case 3: peek();
                    break;
            
            case 4: displayStack();
                    break;
            
            case 5: flag = 0;
                    break;
        }
    }

    return 0;
}

