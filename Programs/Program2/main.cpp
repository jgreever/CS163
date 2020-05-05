/* main.cpp
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


int main()
{
    int choice;
    int flag = 1;
    int value = 0;
    package new_package;
    stack n_stack;

    while(flag == 1)
    {
        cout << ". Push to stack, type 1\n";
        cout << ": Pop from the stack, type 2\n";
        cout << ".: Peek at the stack, type 3\n";
        cout << ":: Display the stack contents, press 4\n";
        cout << ".:: Exit the program, type 5\n";
        cout << "\n";
        cin >> choice;

        switch(choice)
        {
            case 1: cout << "Enter Value: ";
                    cin >> value;
                    n_stack.push(new_package);
                    break;

            case 2: n_stack.pop();
                    break;

            case 3: n_stack.peek(new_package);
                    break;

            case 4: n_stack.display();
                    break;

            case 5: flag = 0;
                    break;
        }
        return 0;
    }
}
