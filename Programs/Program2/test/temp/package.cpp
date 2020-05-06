#include "package.h"

package::package()
{
    package_id = 0;
}

package::~package()
{

}

package::package(const package & a_new_entry)
{
    
}

int package::create_entry(char * s_name, char * s_phone, int package_id, char * d_name, char * d_address)
{
    return 1;
}
/*
int package::copy_entry(const package & a_new_entry)
{
    return 1;
}

