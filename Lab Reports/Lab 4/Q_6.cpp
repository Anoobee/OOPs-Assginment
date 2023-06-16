//Q6.cpp
/*Create a class with a data member to hold a "serial number" 
for each object created from the class. That is, the first object
 created will be numbered 1, the second 2, and so on by using the basic concept of static data members.
 Use static member function if it is useful in the program. 
Otherwise, make a separate program that demonstrates the use of static member function.*/


#include<iostream>

class student
{
    public:
    static int counter ;
    int RollNo;
    std::string Name;
    student(std:: string name_)
    {
        RollNo=++counter;
        Name=name_;
        
    }
    static void Total()
    {
        std::cout<<"Total Number of Studnet = "<<counter<<std::endl;
    
    }
    void Display()
    {
        std:: cout<<"Name : "<<Name<<std::endl;
        std:: cout<<"Roll No : "<<RollNo<<std::endl;
        
        
    }

};
 int student :: counter =0;
int main()
{
    student s1("Anup"), s2("Anurag") ,s3("Xi-teeJ");
    s1.Display();
    s2.Display();
    s3.Display();
    student :: Total();
    return 0;
}