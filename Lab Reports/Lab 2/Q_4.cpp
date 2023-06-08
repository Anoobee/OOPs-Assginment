//Q_4.CPP
/*Write a function that passes two temperatures by reference and sets the 
larger of the two numbers to a value entered by user by using return by reference.*/
#include<iostream>
float& temperature(float &t1, float &t2)
{
    return (t1>t2?t1:t2);
}

int main()
{
    float t1=23.1,t2=23;
        std::cout<<t1<<std::endl;
    temperature(t1,t2)=55;
        std::cout<<t1<<std::endl;
}