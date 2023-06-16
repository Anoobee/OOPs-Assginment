//Q2.cpp
/* Write a class to store x, y, and z coordinates of a point in three-dimensional space.
 Overload addition and subtraction operators for addition and subtraction of two coordinate objects. 
Implement the operator functions as non-member functions (friend operator functions).*/

#include<iostream>

class Point 
{
    private :
    int x,y,z;
    public:
    friend Point operator + (Point a, Point b);
    friend Point operator - (Point a, Point b);
    Point (int a=0, int b=0, int c=0)
    {
        x=a;
        y=b;
        z=c;
    }
    void Display()
    {
        std:: cout<<"("<<x <<","<< y<<"," <<z <<")"<<std:: endl;
    }
};

Point operator + (Point a, Point b)
{
Point p;
p.x=a.x + b.x;
p.y=a.y + b.y;
p.z=a.z + b.z;
return p;
}
Point operator - (Point a, Point b)
{
Point p;
p.x=a.x - b.x;
p.y=a.y - b.y;
p.z=a.z - b.z;
return p;
}

int main()
{
    Point p1(1,2,3), p2(3,4,5), p3;
    p3.Display();
    p3=p1 + p2;
    p3.Display();
    p3=p1 - p2;
    p3.Display();
    return 0;
}