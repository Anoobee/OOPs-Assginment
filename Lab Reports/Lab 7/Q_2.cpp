//Q2.cpp
/*Create a class Person and two derived classes Employee and Student, 
inherited from class Person. Now create a class Manager which is derived
 from two base classes Employee and Student. 
Show the use of the virtual base class.*/

#include<iostream>

 class Person 
{
    public:
     void display()
    {
        std::cout<<"Hi, I am base class";
    }
};
class Employee: public  virtual Person
{
    public:
    void Edisplay()
    {
        std::cout<<"Hi, I am employee";
    }
};
class Student : public  virtual Person
{
    public:
    void Sdisplay()
    {
        std::cout<<"Hi, I am Student";
    }
};

class manager : public Student, public Employee
{
    public :
    void Mdisplay()
    {
        std::cout<<"Hi, I am a manger";
    }

};

int main()
{
    manager m1;
    m1.display();
}
