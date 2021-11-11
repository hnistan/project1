#include <iostream>
#include <string>
#include "carpenter.h"

using namespace std;


bool Wood :: set_length (float l)
{
    if (l > 0)                                  //Check the length of the positive
    {
        length = l;
        return true;
    }
    else
        return false;
}

bool Wood :: set_width (float w)
{
    if (w > 0)                                 //Check the width of the positive
    {
        width = w;
        return true;
    }
    else
        return false;
}

bool Wood :: set_height (float h)
{ 
    if (h > 0)                                 //Check the height of the positive
    { 
        height = h;
        return true;
    }
    else
        return false;
}

float Wood :: get_length ()
{
    return length;
}

float Wood :: get_width ()
{
    return width;
}

float Wood :: get_height ()
{
    return height;
}

string Tool :: set_name(string n)
{
    name_tool = n;
    return n;
}

bool Tool :: set_type (int t)
{
    if (t == 0 || t == 1)                              //The number entered must be 0 or 1
    {
        type_tool = t;
        return true;
    }
    else
        return false;
}

bool Tool :: set_size (int s)
{
    if (s == 1 || s == 2 || s == 3)                     //The number entered must be 1, 2, or 3
    {
        size_tool = s;
        return true;
    }
    else
        return false;
}

string Tool :: get_name()
{
    return name_tool;
}

int Tool :: get_type()
{
    return type_tool;
}

int Tool :: get_size ()
{
    return size_tool;
}