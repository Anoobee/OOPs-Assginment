//Q4.cpp
/*Write a program with classes to represent a circle, rectangle, and triangle. 
Each class should have data members to represent the actual objects and member functions
 to read and display objects, find perimeter and area of
 the objects, and other useful functions. Use the classes to create objects in your program.*/

 #include<iostream>
 #include<cmath>

 class circle{

    private:
    float radii;
    public:
    void SetData(int r)
    {
        radii=r;
    }
    void Display()
    {
        std::cout<<"The area of circle is :"<<3.14*radii*radii<<" meter square"<<std::endl;
        std::cout<<"The perimeter of circle is :"<<3.14*radii*2<<" meter"<<std::endl;
    }
 };

 class rectangle{

    private:
    float length, width;
    public:
    void SetData(int l, int b)
    {
        length=l, width=b;
    }
    void Display()
    {
        std::cout<<"The area of Rectangle is :"<<length*width<<" meter square"<<std::endl;
        std::cout<<"The perimeter of Rectangle is :"<<(length+width)*2<<" meter"<<std::endl;
    }
 };

 class triangle{

    private:
    float base , height;
    public:
    void SetData(int b, int h)
    {
        base=b, height=h;
    }
    void Display()
    {
        std::cout<<"The area of Trigangle is :"<<0.5*base*height<<" meter square"<<std::endl;
        std::cout<<"The perimeter of Trigangle is :"<<base+height+(sqrt((base*base)+(height*height)))<<" meter"<<std::endl;
    }
 };

 int main()
 {
    circle c;
    rectangle r;
    triangle t;

    c.SetData(7);
    r.SetData(10,20);
    t.SetData(10,40);

    c.Display();
    r.Display();
    t.Display();

 }