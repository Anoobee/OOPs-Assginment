//Q3.cpp
/*Write a class that can store Department ID and Department Name with constructors to initialize its members.
 Write destructor member in the same class and display the message "". 
Your program should be made such that it should show the order of constructor and destructor invocation.*/

#include<iostream>
#include<string> 
static int n=0;
class Department
{
    
private:

int id;
std:: string Name;

public:
Department(int id1=0, std:: string nme="NA"  )
{
std::cout<<"Thanks for the call,"<<++n<<" object's constructor"<<std::endl;
id=id1;
Name =nme;


}
~Department( )
{
std::cout<<"Object "<<n--<<" goes out of the scope, Destructor "<<std::endl;

}

};
int main()
{
    Department D1;
    {

        Department d2,d3;
    }

}
