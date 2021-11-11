#include <iostream>
#include <string>

#ifndef carpenter_h
#define carpenter_h

using namespace std;

enum WoodType
{
    cherrywood,                 //choobe gilas
    walsawood,                 //choob walsa
    blackmaple,                //afraye sia
    walnut                     //choob gerdo
};

class Wood
{
    public : 
        Wood (WoodType woodtype) : type (woodtype)         //constructor
        {
            
        }
        bool set_length (float l);
        bool set_width (float w);
        bool set_height (float h);
        float get_length ();
        float get_width ();
        float get_height ();

    private :
        float length;                          
        float width;                           
        float height; 
        const WoodType type;                       

};

class Tool
{
    public :
        string set_name(string n);
        bool set_type (int t);
        bool set_size (int s);
        int get_size ();
        string get_name ();
        int get_type ();

    private :
        string name_tool;
        int type_tool;                         //electric or non-electric   (0 for non-electric, 1 for electric)
        int size_tool;                         //3 for big, 2 for medium, 1 for little

};



#endif