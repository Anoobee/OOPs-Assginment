//Q-1.cpp
/*Write a program to demonstrate the use of different ios flags and functions to format the output. 
Create a program to generate the bill invoice of a department store by using different formatting.*/
#include<iostream>
#include<iomanip>

class BILL 
{
private:
std:: string *name;
float *price;
float NetPrice;
public:
int index;
BILL()
{
    
    std::cout<<"Enter the number of Items: ";
    std::cin>>index;
    name = new std::string[index];
    price = new float[index];
    // reading the data
    for(int i=0;i<index;i++)
    {
        std::cout<<"Enter the Name of Items "<<"["<<i+1<<"] : ";
        std::cin>>name[i];
        std::cout<<"Enter the Price of Items "<<"["<<i+1<<"] : ";
        std::cin>>price[i];

    }
}
//Display function
 void Display()
{
// heading 
float TotalPrice=0;
    
   
    std::cout<<std::setw(50)<<"BILL"<<std::endl;
std::cout<<std::setw(55)<<"SHERPA STORE"<<std::endl;
std::cout.width(65);
std::cout<<"___________________________________"<<std::endl;
std::cout<<std::setw(35)<<"List"<<std::setw(30)<<"Price"<<std::endl;
for(int j=0;j<index;j++)
{
    TotalPrice+=price[j];
    std::cout.precision(8);
std::cout<<std::setw(30)<<j+1<<"."<<name[j]<<std::setw(30)<<"Rs."<<price[j]<<std::endl;
}
std::cout.width(65);
std::cout<<"___________________________________"<<std::endl;
std::cout<<std::setw(35)<<"Total"<<std::setw(30)<<"Rs."<<TotalPrice<<std::endl;
}

};


int main()
{
 BILL b1;
    b1.Display();
}