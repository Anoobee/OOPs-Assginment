//Q_6.cpp
/*Write a program that displays the current monthly salary of chief executive officer, information officer, 
and system analyst, programmer that has been increased by 9, 10, 12, and 12 percentages respectively in year
 2010. Let us assume that the salaries in year 2009 are

Chief executive officer Rs. 35000/m

Information officer Rs. 25000/m

System analyst Rs. 24000/m

Programmer Rs. 18000/m

Make a function that takes two arguments; one salary and the other increment. Use proper default argument.*/

#include<iostream>
#include<string>
class employee{
    private:
    std::string position ;
    float salary1;
    public:
    void salary(float sal=10000, float inc=12 )
    {
        salary1=sal+sal*(inc*0.01);
    }
    void SetPoistion(std::string pos )
    {
        position=pos;
        
    }
    void    Display()
    {
        std::cout<<position<<std::endl
        <<"Salary: "<<salary1<<std::endl;
    }
};
int main()
{
    employee e1, e2, e3, e4;
    e1.SetPoistion("Chief executive officer");
    e2.SetPoistion("Information officer");
    e3.SetPoistion("System analyst");
    e4.SetPoistion("Programmer");

    e1.salary();
    e2.salary(25000,10);
    e3.salary(24000,12);
    e4.salary(18000,12);

    e1.Display();
    e2.Display();
    e3.Display();
    e4.Display();



}