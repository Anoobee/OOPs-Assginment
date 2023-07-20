//Q2.cpp
/*Write a program to overload stream operators to read a complex number and 
display the complex number in a+ib format.*/
#include<iostream>

class Complex{
    private:
    int real;
    int img;
    public:
    friend std::ostream& operator <<(std::ostream &os, Complex &c);
    friend std::istream& operator >>(std::istream &os, Complex &c);

};

std::istream& operator >>(std::istream& is, Complex &c)
{
    
std::cout<<"Real part : ";
is>>c.real;
std::cout<<"Imaginar part : ";
is>>c.img;
return is;

}
std::ostream& operator <<(std::ostream& os, Complex &c)
{
    os<<c.real<<" + "<<c.img<<"i";
    return os;

}

int main()
{
    Complex c1;
    std::cin>>c1;
    std::cout<<c1;
    return 0;
}