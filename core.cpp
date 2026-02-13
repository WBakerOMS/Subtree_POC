#include <iostream>
#include "core.hpp"

using namespace std;

int id_check(int id)
{
    switch (id)
    {
    case c_id1:
        cout << "core 1 identifier" << endl;
        break;
    case c_id2:
        cout << "core 2 identifier" << endl;
        break;
    case c_id3:
        cout << "core 3 identifier" << endl;
        break;
    default:
        return non_core_ids(id);
    }

    return 0;
}

int __attribute__((weak)) non_core_ids(int id) 
{
    cout << "unknown identifier" << endl;

    return 1;
}