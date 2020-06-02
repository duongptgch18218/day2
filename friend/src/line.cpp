#include "../include/line.h"
#include <iostream>

using namespace std;

Line::Line(){
    this -> name = "ab";
    this -> length = 1;
}

Line::Line(const string &name, const int &length){
    this -> name = name;
    this -> length = length;
}

int Line::get_length()const{
    return this -> length;
}

void Line::set_length(const int &length){
    this -> length = length;
    cout << "Set length successfull";
    return;
}

void Line::draw()const{
    cout << name << ": ";
    cout << "+";
    for(int i = 0; i < this -> length; i++){
        cout << "-";
    }
    cout << "+";
}


Line Line::operator+(const int &n){
    int new_length = length + n;
    return Line(name, new_length);
}


ostream& operator <<(ostream &out, const Line &l){
    out << l.name << ": ";
    out << "+";
    for(int i = 0; i < l.length; i++){
        cout << "-";
    }
    out << "+";
    return out;
}

bool Line::operator<(const Line &l){
    // if(length < l.length) return true;
    // else return false;

    return length < l.length;
}


istream& operator >>(istream &in, Line &l){
    cout << "Enter line name "; in >> l.name;
    cout << "Enter Line length"; in >> l.length;

    return in;
}