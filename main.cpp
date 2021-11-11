#include <iostream>
#include <string>
#include "carpenter.h"

                                                          //braye teste dorosti
using namespace std;

int main ()
{
    Wood w (cherrywood);                                         
    Tool t;

    t.set_name("Are");
    t.set_size(2);
    t.set_type(0);

    w.set_height(20);
    w.set_length(12.9);
    w.set_width(20000);

    cout << t.get_size() << "\t" << t.get_name() << "\t" << t.get_type() << endl;

    cout << w.get_height() << "\t" << w.get_width() << "\t" << w.get_length() << endl;


    return 0;
}