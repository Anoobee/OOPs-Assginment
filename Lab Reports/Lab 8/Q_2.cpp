//Q2.cpp
/*Write a program to create a user-defined manipulator
 that will format the output by setting the width, precision, 
and fill character at the same time by passing arguments.*/

#include<iostream>

class TabNumber{
    private:
    int n;
    public:
    TabNumber(int n1):n(n1){}
    friend std::ostream& operator<<(std::ostream &os,TabNumber tn);

};
TabNumber tb(int n=1)
{
    return TabNumber(n);
}
std::ostream& operator<<(std::ostream &os,TabNumber tn)
{
    for(int i=0;i<tn.n;i++)
    {
    os<<'\t';
    }
    os<<std::flush;
    return os;
}
int main()
{
int a=1,b=4, c=5;
std::cout<<a<<tb(3)<<b<<tb(0)<<c;
    
}