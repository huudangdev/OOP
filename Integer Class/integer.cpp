#include "integer.h"
INTEGER::INTEGER(void)
{
}
INTEGER::~INTEGER(void)
{
}
ostream &operator<<(ostream &out,const INTEGER &a)
{
    out<<a.x;
    return out;
}
istream &operator>>(istream &in,INTEGER &a)
{
    in>>a.x;
    return in;
}
INTEGER INTEGER::operator+(const INTEGER &a)
{
    INTEGER z;
    z.x=this->x+a.x;
    return z;
}
INTEGER INTEGER::operator-(const INTEGER &a)
{
    INTEGER z;
    z.x=this->x-a.x;
    return z;
}
INTEGER INTEGER::operator*(const INTEGER &a)
{
    INTEGER z;
    z.x=this->x*a.x;
    return z;
}
INTEGER INTEGER::operator/(const INTEGER &a)
{
    INTEGER z;
    z.x=this->x/a.x;
    return z;
}
void INTEGER::operator++()
{
    x++;
}
void INTEGER::operator--()
{
    x--;
}
