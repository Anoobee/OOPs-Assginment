//Q_5.cpp
/*Assume that employee will have to pay 10 percent income tax to the government.
 Ask user to enter the employee salary. Use inline function to display
 the net payment to the employee by the company.*/

 #include<iostream>
 float inline salary( float a)
 {
    std:: cout<<"The net payment of the employe is :Rs"<<(a-a*0.1);

 }
  int main()
  {
    float salary1;
    std:: cout<<"Enter the salary of the employee : ";
    std::cin>>salary1;
    salary(salary1);
    return 0;
  }