//Q5.cpp
/*Assume that an object represents an employee report that contains information like employee id, 
total bonus, total overtime in a particular year. Use an array of objects to represent n employees' 
reports. Write a program that displays the report. Use setpara() member function to set report attributes
 by passing the arguments and member function displayreport() to show the report according to the parameter
  passed. Display the report in the following format.

An employee with ... ... ... has received Rs ... ... ...as a bonus

and

had worked ... ... ... hours as overtime in the year ... ... ...*/

#include<iostream>

class employee{
    private:
    int id,year;
    float bonus, overtime;

    public:
    void Setpara(int id1, float b, float ot,int yr)
    {
        id=id1, bonus=b, overtime=ot, year=yr;

    }
    void Display()
    {
        std::cout<<"An employee with "<<id<<" has received Rs"<<bonus<<" as a bonus"<<std::endl
                <<"and"<<std::endl
                <<"had worked "<<overtime<<" hours as overtime in the year "<< year<<std::endl;
    }
};

int main()
{
   employee employe[5];

   // SETING THE DATA   
    employe[0].Setpara(131,1000,10,2002);
    employe[1].Setpara(141,1000,10,2001);
    employe[2].Setpara(102,2000,20,2002);
    employe[3].Setpara(103,3000,30,2003);
    employe[4].Setpara(104,4000,40,2004);

    // display the array
    employe[0].Display();
employe[1].Display();
employe[2].Display();
employe[3].Display();
employe[4].Display();
}
