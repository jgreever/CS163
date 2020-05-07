#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <ctime>
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
    node * temp = head;
    while(!temp)
    {
        next = temp->next;
        delete temp;
        temp = next;
    }
    temp = NULL;
}

void display_all(node * head)
{
    if(!head) return;
    cout << head->data << " <- "; //output in reverse order
    display_all(head->next);
    //cout << head->data << " -> "; //output in normal order
}

void push(node ** head, int some_data)
{
    node * temp = new node();
    temp->data = some_data;
    temp->next = (*head);
    (*head) = temp;
}

void gen_random_list(node ** head)
{
    srand(time(0));
    node * temp = new node();
    temp->data = rand() % 100;
    temp->next = (*head);
    (*head) = temp;
}
int main()
{
    //create a list and display back in order
    node * head = NULL;
    //int some_data = 0;
    //int flag = -1;
    //while(flag != 2)
    //{
        //cout << "\nPlease type any number from 1 to 100: ";
        //cin >> some_data;
        //cin.ignore(100, '\n'); 
        cout << "Generating a random list of numbers of random size..." << endl;
        srand(time(0));
        int node_random = rand() % 25;
        //some_data = rand() % 100;
        for(int i = 0; i < node_random; i++)
        {
            int some_data = rand() % 25;
            push(&head, some_data);
        }
        cout << "Done, Random list of random size has been generated." << endl;
        //cout << "\nEnter another? 1 for Yes,  or 2 for No: ";
        //cin >> flag;
        //cin.ignore(100, '\n');
    

    //create a list and insert random numbers for
    //the next practice problem(s)
    /*
     * not working correctly yet
     node * temp = new node(); temp = NULL;
     for(int i = 0; i < 20; i++)
     {
     srand(time(0));
     int random = 0;
     random = rand() % 100;
     push(&temp, random);
     }
     */
    display_all(head);
    return 0;
}
