//Q1.cpp
/*Write a class for instantiating the objects that represent the two-dimensional Cartesian coordinate system.

A. Make a particular member function of one class as a friend function of another class for addition.

B. Make the other three functions to work as a bridge between the classes for multiplication, division, and subtraction.

C. Also write a small program to demonstrate that all the member functions of one class are the friend functions of another class if the former class is made friend to the latter.

Make least possible classes to demonstrate all the above in a single program without conflict.*/
#include<iostream>
class Added;
class Display;
class Cartesian 
{
    private :
    int x,y;
    public:
    friend Cartesian Added ::  Add(Cartesian ,Cartesian);
    friend Cartesian Multiply ( Cartesian , Cartesian); 
    friend Cartesian Sub ( Cartesian , Cartesian); 
    friend Cartesian Divide ( Cartesian , Cartesian); 
    friend class Display;
};
class Added {

public:
Cartesian Add(Cartesian a, Cartesian b)
{
    Cartesian temp1;
    temp1.x = a.x+ b.x;
    temp1.y = a.y+ b.y;
    return temp1;
}};
Cartesian Multiply(Cartesian a, Cartesian b)
{
    Cartesian temp;
    temp.x=a.x* b.x;
    temp.x=a.y* b.y;
    return temp;
}
Cartesian Sub(Cartesian a, Cartesian b)
{
    
    Cartesian temp;
    temp.x=a.x -b.x;
    temp.x=a.y -b.y;
    return temp;
}
Cartesian Divide(Cartesian a, Cartesian b)
{
    Cartesian temp;
    temp.x=a.x/ b.x;
    temp.x=a.y/ b.y;
    return temp;
}
class Display{
public:
 void display (Cartesian a)
 {
    
    std::cout<<"("<<a.x<<","<<a.y<<")"<<std:: endl;
 }
};
int main()
{   
    
Cartesian c1(4,2) , c2(2,2), c3,c4, c5,c6;
c3=Multiply(c1,c2);
c4=Sub(c1,c2);
c5=Added ::Add(c1,c2);
c6=Divide(c1,c2);

Display(c3);
Display(c4);
Display(c5);
Display(c6);

return 0;

};

