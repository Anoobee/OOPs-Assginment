//Q_2.cpp
/*Write a program using the function overloading that converts feet to inches. 
Use function with no argument, one argument and two arguments. 
Decide yourself the types of arguments. Use pass by reference in any one of the function above.*/
#include<iostream>

int FeetToInch()
{
    std::cout<<"0 inch"<<std::endl;
}
int FeetToInch(int &feet)
{
    std::cout<<feet*12<<" inch"<<std::endl;
}
int FeetToInch(int feet1, int feet2)
{
    std::cout<<(feet1+feet2)*12<<" inch"<<std::endl;
}
int main()
{
    int feet=10,feet2=20,feet1=30;
    FeetToInch();
    FeetToInch(feet);
    FeetToInch(feet1,feet2);
    return 0;
    
}