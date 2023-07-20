//Q1.cpp
/* Create a function called sum() that returns the sum of the elements of an array. 
Make this function into a template so it will work with any numerical type. 
Write a program that applies this function to data of various types.*/

#include<iostream>
#include<string>

template<class T>
void sum(T a[])
{
    T sum =0;
 
    for(int i =0;i<5;i++ )
    {
        sum+=a[i];
    };
    
    std::cout<<sum<<std::endl;
}
int main()
{
    int a[5] = {1,2,3,4,5};
    float f[5] = {1.1, 2.2 , 3.3 , 4.4, 5.5};
 
    sum(a);
    sum(f);
        return 0;
}