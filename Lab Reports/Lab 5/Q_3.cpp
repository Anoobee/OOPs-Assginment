//Q_3.cpp
/*Write a program to compare two objects of a class that contains an integer
 value as its data member. Make overloading functions to overload equality(==), 
 less than(<), greater than(>), not equal (!=), greater than or equal to (>=), 
 and less than or equal to(<=) operators using member operator functions.*/

#include<iostream>

class number{
private:
int n;
public:
number (int a=0) {n=a;}

bool operator !=(number b)
{
    if (n!=b.n)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
bool operator >(number b)
{
    if (n>b.n)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
bool operator <(number b)
{
    if (n<b.n)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
bool operator <=(number b)
{
    if (n<=b.n)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
bool operator >=(number b)
{
    if (n>=b.n)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
bool operator ==(number b)
{
    if (n==b.n)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
};

int main ()
{
    number n1(4),n2(5);
    std:: cout<< (n1==n2)<<std::endl;
    std:: cout<< (n1!=n2)<<std::endl;
    std:: cout<< (n1<=n2)<<std::endl;
    std:: cout<< (n1>=n2)<<std::endl;
    std:: cout<< (n1<n2)<<std::endl;
    std:: cout<< (n1>n2)<<std::endl;
    return 0;
}
