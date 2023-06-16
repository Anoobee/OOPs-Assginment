//Q-4.cpp
/*Assume that one constructor initializes data member say num_vehicle, 
hour, and rate. There should be a 10% discount if num_vehicle exceeds 10.
 Display the total charge. Use two objects and show a bit-by-bit copy
 of one object to another (make your own copy constructor).*/
 
 #include<iostream>

class Vehicle {

    private:
    int number, hour;
    float rate;
    public:
    Vehicle(int no=0, int hr=0, float r=0 )
    {number=no,hour=hr,rate=r;}

    Vehicle(Vehicle &V)
    {
        std::cout<<"copy "<<std:: endl;
        number=V.number;
        hour=V.hour;
        rate=V.rate;
    }
    void Display()
    {
        
        if(number>10)
        {
            std::cout<<"Total Charge : "<<0.9*hour*rate*number<<std::endl;
        }
        else
        {
             std::cout<<"Total Charge : "<<hour*rate*number<<std::endl;
        }

    }
    
};
int main()
{
Vehicle v2(15,5,15);

Vehicle v=v2;
v.Display();
return 0;

}

