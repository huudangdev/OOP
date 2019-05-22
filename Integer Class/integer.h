#pragma once
#include<iostream>
using namespace std;
class INTEGER
{
private:
    float x;
public:
    INTEGER(void);
    ~INTEGER(void);
    friend ostream &operator<<(ostream &out,const INTEGER&); 
    friend istream &operator>>(istream &in,INTEGER&);
    INTEGER operator+(const INTEGER&);
    INTEGER operator-(const INTEGER&);
    INTEGER operator*(const INTEGER&);
    INTEGER operator/(const INTEGER&);
    void operator++();
    void operator--();
};
