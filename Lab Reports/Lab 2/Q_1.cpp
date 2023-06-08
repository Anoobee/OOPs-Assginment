//Q_1.cpp
//Write a program to set a structure to hold a date (mm,dd and yy), assign values to the members of the structure 
//and print out the values in the format 11/28/2004 by function. Pass the structure to the function
#include<iostream>
using namespace std;
struct Date
{
int month, day,year;


void display()
{
    cout<<month<<"/"<<day<<"/"<<year<<endl;
}

} s;
int main()
{
Date d1;
d1.day=1;
d1.month=2;
d1.year=2004;
d1.display();
    return 0;
}