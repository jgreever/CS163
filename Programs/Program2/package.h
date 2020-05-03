/* package.h
 *
 * Justin Greever
 * CS163
 * 4/24/2020
 *
 * Program #2 - Stacks and Queues, making a package management program
 *
 * TODO: fill out top part
 */
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

class package_entry
{
    public:
        package_entry();
        ~package_entry();
        int create_entry();
        int copy_entry(const package_entry & a_new_entry);
        int retrieve() const;
        int retrieve(package_entry & found) const;
        int display(void) const;

    private:
        char * sender_name;
        char * sender_phone;
        int package_id_num;
        char * to_name;
        char * to_address1;
        char * to_address2;
        char * to_city;
        char * to_state;
        int zipcode;
};
