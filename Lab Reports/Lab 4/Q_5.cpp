//Q5.cpp
/*Write a program that illustrates the following relationship and comment on them. 

i) const_object.non_const_mem_function

ii) const_object.const_mem_function

iii) non_const_object.non_const_mem_function

iv) non_const_object.const_mem_function*/

#include<iostream>

class check 
{
   public:
    int data1, data2;

    public:
    check (){};
    check(int d1, int d2)

    {
        data1=d1;
        data2=d2;
    }
   void cfun () const 
    {
        std:: cout<<"Hi!, I am a constant function"<<std::endl;
        
    }

     void nfun()
    {
        std:: cout<<"Hi!, I am a Normal function"<<std::endl;

    }
};

int main ()
{
    const check c1(1,2);
    c1.cfun();
    // c1.nfun(); this produces an error 
    // c1.data1=3 ; error
    
    check c3;
    c3.cfun();
    c3.nfun();
}