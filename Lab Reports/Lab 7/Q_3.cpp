//Q2.cpp
/*Write a program with an abstract class Student and create derive classes Engineering,
 Medicine and Science from base class Student. Create the objects of the derived classes and process them and 
access them using an array of pointers of type base class Student.*/

#include<iostream>

class Student
{
    public:
    virtual void  display() =0;    
  
};

class Engineering : public Student
{
    public:
    void display()    
    {
        std::cout<<"Hi, I am an Engineering student"<<std::endl;
    }
};

class Medical : public Student
{
    public:
    void display()    
    {
        std::cout<<"Hi, I am a medical student"<<std::endl;
    }
};

class Science : public Student
{
    public:
    void display()    
    {
        std::cout<<"Hi, I am a Science student"<<std::endl;
    }
};

int main()
{

    Student *s[3];
    Engineering e1;
    Medical m1;
    Science s1;
    s[0]=&e1 ;
    s[1]=&m1 ;
    s[2]=&s1 ;
    for(int i=0;i<3;i++)
    {
        s[i]->display();
    }
return 0;

}