//Q_1.cpp
/*Write a program that has a class to represent time. The class should have constructors to 
initialize data members hour, minute, and second to 0 and to initialize them to values passed
 as arguments. The class should have a member function to add time objects and return the result 
 as a time object. There should be functions to display time in 12-hour and 24-hour format.*/
 #include<iostream>


class Time
{
    private:
    int hour,minute,second;
    public:
    Time(int hr=0,int min=0, int sec =0)
{
    hour=hr;
    minute=min;
    second=sec;
    
}
Time Add(Time t1, Time t2 )
{

Time sum;
sum.second=t1.second+t2.second;
sum.minute=t1.minute+t2.minute;
sum.hour=t1.hour+t2.hour;

    if(sum.second>59)
    {
        sum.minute++;
        sum.second-=60;
    }

    if(sum.minute>59)
    {
        sum.hour++;
        sum.minute-=60;
    }
return sum;
}
// 12 hour display
void Display1()
{
    std::cout<<hour%12<<":"<<minute<<":"<<second<<std::endl;
}

// 24 hour display
void Display2()
{
    std::cout<<hour%24<<":"<<minute<<":"<<second<<std::endl;
}

};
int main()
{
Time t1(8,50,30),t2(13,30,40),t3;
t1.Display1();
t2.Display1();
t2.Display2();


t3=t2.Add(t1,t2);
t3.Display1();
t3.Display2();
return 0;

}
