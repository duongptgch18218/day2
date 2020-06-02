#ifndef _LINE_H_
#define _LINE_H_
#include <iostream>
#include <string>

using namespace std;

class Line
{
    private:
        string name;
        int length;
    public:
        Line();
        Line(const string &name, const int &length);

        int get_length() const; //constant method
        void set_length(const int &length); // not const

        void draw() const;



        //overload operators
        Line operator+(const int &n); // increase length by n

        //overload output operator using friend access
        friend ostream& operator <<(ostream &out, const Line &l);



        bool operator<(const Line &l);


        //overload input operator
        friend istream& operator >>(istream &out, Line &l);
};



#endif