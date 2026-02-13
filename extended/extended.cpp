#include <iostream>
#include "extended.hpp"

using namespace std;

static int extended_id_check(int id);

int non_core_ids(int id) 
{
    return extended_id_check(id);
}

static int extended_id_check(int id)
{
    switch (id)
    {
    case e_id4:
        cout << "extended 4 identifier" << endl;
        break;
    case e_id5:
        cout << "extended 5 identifier" << endl;
        break;
    case e_id6:
        cout << "extended 6 identifier" << endl;
        break;
    default:
        cout << "unknown identifier" << endl;
        return 1;
    }

    return 0;
}