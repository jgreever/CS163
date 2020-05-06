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
    new_pack = NULL;
    cout << "Copying data to temp package: " << endl;
    char tempname[strlen(tname) + 1];
    strcpy(tempname, tname);
    strcpy(new_pack->s_name, tempname);
    char tempphone[strlen(tphone) + 1];
    strcpy(tempphone, tphone);
    strcpy(new_pack->s_phone, tempphone);
    new_pack->package_id = tpackage_id;
    char tempdname[strlen(tdname) + 1];
    strcpy(tempdname, tdname);
    strcpy(new_pack->d_name, tempdname);
    char tempdaddress[strlen(tdaddress) + 1];
    strcpy(tempdaddress, tdaddress);
    strcpy(new_pack->d_address, tempdaddress);
    cout << "Contents of current package: " << endl;
    cout << new_pack->s_name << "\n" << new_pack->s_phone << "\n" << new_pack->package_id << "\n" << new_pack->d_name << "\n" << new_pack->d_address << "\n" << endl;
    return 0;
}
