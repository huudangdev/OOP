#pragma once
#include<iostream>
using namespace std;
class sophuc
{
private:
    float t,a;
public:
    sophuc(float =0,float =0);
    ~sophuc(void);
    float dodai();
    sophuc operator+(const sophuc &);
    sophuc operator-(const sophuc &);
    sophuc operator*(const sophuc &);
    sophuc operator/(const sophuc &);
    bool operator<(sophuc &);
    bool operator<=(sophuc &);
    bool operator>(sophuc &);
    bool operator>=(sophuc&);
    bool operator==(sophuc&);
    bool operator!=(sophuc&);
    friend ostream &operator<<(ostream &out,const sophuc &a);
    friend istream &operator>>(istream &in,sophuc &a);
};