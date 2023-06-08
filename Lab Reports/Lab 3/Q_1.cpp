//Q1.cpp
/*Write a simple program that converts the temperature in Celsius scale to Fahrenheit
 scale and vice versa using the basic concept of class and object. Make separate classes 
 for Celsius and Fahrenheit which will have the private members that hold the temperature
  value and make conversion functions in each class for conversion from one to another. 
  For example, you need to have a function toFahrenheit() in class Celsius that converts to
   Fahrenheit scale and returns the value.*/

   #include<iostream>
class Celsius 
{
    private:
    float temp;
    public:
    void C(float c)
    {
        temp=c;
    }
    float toFahrenheit()
    {
        return (temp*1.8+32);

    }
        
};
class Fahrenheit 
{
    private:
    float temp;
    public:
    void F(float f)
    {
        temp=f;
    }
    float GetData()
    {
        return temp;
    }
    float toCelsius()
    {
        return (temp-32)*5/9;

    }
        
};
int main()
{
    Celsius c1;
    c1.C(45);
    Fahrenheit f1;
    f1.F(78);
    std::cout<<c1.toFahrenheit()<<std::endl;
    std::cout<<f1.toCelsius()<<std::endl;

}