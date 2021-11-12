#include <iostream>
#include <string>
#include "carpenter.h"

using namespace std;

Wood :: Wood (WoodType type, float length, float width, float height)           //constructor
{
    set_length(length);
    set_width (width);
    set_height (height);
}

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

float Wood :: get_length () const
{
    return length;
}

float Wood :: get_width () const
{
    return width;
}

float Wood :: get_height () const
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

string Tool :: get_name() const
{
    return name_tool;
}

int Tool :: get_type() const
{
    return type_tool;
}

int Tool :: get_size () const
{
    return size_tool;
}

bool Saw :: set_size (int s)
{
    if (s == 1 || s == 2 || s == 3)                     //The number entered must be 1, 2, or 3
    {
        size = s;
        return true;
    }
    else
        return false;
}

int Saw :: get_size () const
{
    return size;
}