#include "stack.h"
using namespace std;

int main()
{
    cout << "Allocating package information: " << endl;
    char tname[] = "John Doe";
    char tphone[] = "5555551212";
    int tpackage_id = 12345;
    char tdname[] = "Jane Doe c/o Anyone";
    char tdaddress[] = "123 Some Street, Anytown, AA, 12345";
    cout << "Creating temp package: " << endl;
    package * new_pack = new package;
    cout << "Copying data to temp package: " << endl;
    char tempname[strlen(tname) + 1];
    cout << "Using strcpy to copy data: " << endl;
    std::strcpy(new_pack->s_name, tempname);
    cout << "Initial strcpy finished: " << endl;
    std::strcpy(new_pack->s_phone, &tphone[strlen(tphone) + 1]);
    new_pack->package_id = tpackage_id;
    std::strcpy(new_pack->d_name, &tname[strlen(tdname) + 1]);
    std::strcpy(new_pack->d_address, &tname[strlen(tdaddress) + 1]);
    cout << "Contents of current package: " << endl;
    cout << new_pack->s_name << "\n" << new_pack->s_phone << "\n" << new_pack->package_id << "\n" << new_pack->d_name << "\n" << new_pack->d_address << "\n" << endl;
    return 0;
}
