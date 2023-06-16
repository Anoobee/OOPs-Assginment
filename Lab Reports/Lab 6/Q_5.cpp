//Q5.cpp
/*Write a base class that asks the user to enter a complex number and make a derived
 class that adds the complex number of its own with the base. Finally, make a third class
  that is a friend of derived and
 calculate the difference of the base complex number and its own complex number.*/

 #include<iostream>
class Derived;
class FriendClass;
 class complex
 {
    protected:
    int real , img;
   
    public:

     complex(int a, int b)
     {
        real =0;
        img =0;
     }
    complex()
    {
        std::cout<<"Enter the complex number : "<<std:: endl;
        std::cout<<"Real part : "<<std:: endl;
        std:: cin>>real;
        std::cout<<"imaginary part : "<<std:: endl;
        std:: cin>>img;
        
        
    }
    void Display()
    {
        std::cout<<real<<" + "<<img<<"i"<<std:: endl;
    }
    
     friend FriendClass;
   
     friend Derived;
 };
 class Derived: public complex

 {
      
    friend  FriendClass;
public:

complex Add(const complex &c1)
{
complex temp(0,0);
temp.real=real + c1.real;
temp.img=img + c1.img;
    return temp;
}

 };
 class FriendClass : public complex

 { 
   
public:

complex Sub(complex c1)
{
complex temp(0,0);
temp.real=real - c1.real;
temp.img=img - c1.img;
return temp;
    
}
 };

 int main()
 {
complex c1;
Derived d1;
FriendClass f1;
complex sum(0,0), diff(0,0);
sum=d1.Add(c1), diff=f1.Sub(c1);
std::cout<<"Addition:"<<std::endl;
sum.Display();
std::cout<<"Subtraction:"<<std::endl;
diff.Display();
return 0;

 }