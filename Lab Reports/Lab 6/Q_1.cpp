//Q_1.cpp
/*Write a program that can convert the Distance (meter, centimeter) 
to meters measurement in float and vice versa. Make a class distance 
with two data members, meter and centimeter. 
You can add function members as per your requirement.*/
#include<iostream>

class Distance {
    public:
    float meter;
    int centimeter;
static int toCentimeter(float meter_)
{
int centi;
centi=meter_*100;
return centi;
}
static float toMeter(int centi)
{
float mtr;
mtr =centi*0.1/10;
return mtr;
}

};

int main()
{
    Distance d1,d2;
    d1.centimeter=653;
    d1.meter=78.654;
    d2.centimeter = Distance::toCentimeter(d1.meter);
    d2.meter=Distance::toMeter(d1.centimeter);
    std::cout<<d2.centimeter<<std::endl;
    std::cout<<d2.meter<<std::endl;
}
