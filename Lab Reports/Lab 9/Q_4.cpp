// Q4.cpp
/*Write any program that demonstrates the use of multiple catch handling, 
re-throwing an exception, and catching all exceptions.

*/
#include<iostream>

class DayError{};
class MonthError{};
class YearError{};
class Negative{};


class Date
{
    private:
    int day, month, year;
    public:
    Date()
    {
        try{
        std::cout<<"Enter the year : ";
        std::cin>>year;
        if(year<1 and year>2080) throw YearError();
        std::cout<<"Enter the month : ";
        std::cin>>month;
        if(month<1 and month>12) throw MonthError();
        std::cout<<"Enter the day : ";
        std::cin>>day;
        if(day<1 and day>31) throw DayError();
        }
        catch(YearError)
        {
                std::cout<<" Year Invalid"<<std::endl;
                throw;
                
        }
        catch(DayError)
        {
                std::cout<<" Day Invalid"<<std::endl;
                throw;
        }
        catch(MonthError)
        {
                std::cout<<" Month Invalid"<<std::endl;
                throw;
        }

    }
    void Display()
    {
        std::cout<<"The date is : "<<year<<"/"<<month<<"/"<<day<<std::endl;
        
    }
};

int main()
{
    try{
    Date d1;
    d1.Display();
    }
    catch(...)
    {
        std::cout<<"Date cannot be displayed"<<std::endl;
    }
}
