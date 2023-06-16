//Q4.cpp
/*Write a class Date that overloads prefix and postfix operators to increase
 the Date object by one day, while causing appropriate increments to the month 
 and year (use the appropriate condition for leap year). The prefix and postfix 
 operators in the Date class should behave exactly like the built-in increment operators. */

 #include<iostream>
 #include<iomanip>
bool leap(int yr);
 class Date {
    private:

    int day, month, year;
    public:
    Date(int day_=0, int month_=0, int year_=0)
    {
        day=day_;
        month=month_;
        year=year_;

    }
    int& operator ++ (int );
    int& operator ++ ();

    void Display()
    {
        std::cout<<day<<"/"<<month<<"/"<<year<<std::endl;
    }


 };
 int& Date :: operator ++ ( )
 {
   day++;
    if(leap(year)==true and month==2)
    {
     
    if(day>28)
    {
        if(month==2 )
        {
        day-=28;
        month++;
        }
        else if (day>30)
        {
               day-=30;
        month++;
        }
        else {}


    }

    
       
    }//
     if(day>30)
        {
            day-=30;
            month++;
        }

    if(month >12)
    {
        month-=12;
        year++;
    }

 }
 int& Date :: operator++ (int)
 {
    return ++(*this);
 }

bool leap(int yr)
{
    if((yr%4==0 && yr%100==0) or (yr%400==0))
    {
    return true;
    }
    else
    {
    return false;
    }
}
 int main ()
 {
    Date D1(28,2,2000),D2;
    ++D1,D1.Display();

    D2=D1++, D2.Display();

 }
 