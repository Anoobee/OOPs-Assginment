//Q_4.cpp
/*Create a polymorphic class Vehicle and create other derived classes Bus, Car, and Bike from Vehicle. 
Illustrate RTTI by the use of dynamic_cast and typeid operators in this program*/

#include<iostream>
#include <typeinfo>

class Vehicle 
{
    public:
    int V_no;
    virtual void Display()
    {}
};

class Bus : public Vehicle
{
    public:

void Display() 
{
std::cout<<"I am a Bus "<<std::endl;
}

};

class Car : public Vehicle
{
    public:

void Display() 
{
std::cout<<"I am a Car "<<std::endl;
}
};
class Bike : public Vehicle
{
    public:

void Display() 
{
std::cout<<"I am a Bike "<<std::endl;
}

};

int main()
{
    int a;
    Vehicle *v1, v2;
    Car c1,*c2;
    Bike b1;
    Bus B1;
    v1=&c1;

    // typeid()
    std::cout<<typeid(*v1).name()<<std::endl;
    std::cout<<typeid(c1).name()<<std::endl;
    std::cout<<typeid(v1).name()<<std::endl;
    std::cout<<typeid(b1).name()<<std::endl;
    std::cout<<typeid(B1).name()<<std::endl;
    std::cout<<typeid(a).name()<<std::endl;

    // dynamic cast
    c2=dynamic_cast<Car *>(v1);
       std::cout<<typeid(dynamic_cast<Car *>(v1)).name()<<std::endl;
       std::cout<<typeid(v1).name()<<std::endl;
       std::cout<<typeid(c2).name()<<std::endl;

       return 0;
}