//Q1.cpp
/* Write a program to create a class shape with functions to find the area of the shapes and 
display the names of the shapes and other essential components of the class. Create derived classes
 circle, rectangle, and trapezoid each having overriding functions area() and display(). 
Write a suitable program to illustrate virtual functions and virtual destructors.*/

#include<iostream>
#include<iomanip>

class shape 
{
    protected:
float area;
    public:
     virtual float Area (float)
     {};
     virtual float Area (float, float)
     {};
     virtual float Area (float, float, float)
     {};
     virtual void display()
     {};
   
virtual ~shape()
{
    std::cout<<"I am a destructor."<<std::endl
             <<std::setw(25)<<"-shape"<<std::endl;
}
};

// circle 
class circle : public shape
{
float Area( float r)
{
    area = r*r*0.314;
}
void display()
{
    std::cout<<"The Area of the circle is : "<<area<<std::endl;   
}
~circle()
{
    std::cout<<"I am a destructor."<<std::endl
             <<std::setw(25)<<"-circle"<<std::endl;
}
};
//rectangle
class rectangle : public shape
{
float Area( float l, float b)
{
    area = l*b;
}
void display()
{
    std::cout<<"The Area of the rectangle is : "<<area<<std::endl;   
}
~rectangle()
{
    std::cout<<"I am a destructor."<<std::endl
             <<std::setw(25)<<"-rectangle"<<std::endl;
}
};

//trapezoid
class trapezoid : public shape
{
float Area( float a, float b, float h)
{
    area = 0.5*(a+b)*h;
}
void display()
{
    std::cout<<"The Area of the trapezoid is : "<<area<<std::endl;   
}\
~trapezoid()
{
    std::cout<<"I am a destructor."<<std::endl
             <<std::setw(25)<<"-trapezoid"<<std::endl;
}
};

// main 
int main()
{


    shape *array[3];
    array[0] = new circle ;
    array[1] = new rectangle ;
    array[2] = new trapezoid ;
    array[0]->Area(7);
    array[1]->Area(7,7);
    array[2]->Area(7,7,7);
    for(int i=0;i<3;i++)
    {
        array[i]->display();
    }
    for(int i=0;i<3;i++)
    {
        delete array[i];;
    }

    
return 0;
}