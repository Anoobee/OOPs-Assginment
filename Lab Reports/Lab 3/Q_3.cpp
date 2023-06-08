//Q3.cpp
/*Create a class called carpark that has int data member for car id, 
int data member for charge/hour, and float data member for the parked time.
 Make functions to set data members and show the charges and parked hours of 
 the corresponding car id. Make functions for setting and showing the data members.
  Member function should be called from other functions.*/

  #include<iostream>

  class carpark{
    private:
    int CarId,ChargeHour;
    float ParkedTime;
    public:
    void SetData(int id, int ch, float pt)
    {
        CarId=id;
        ChargeHour=ch;
        ParkedTime=pt;
    }
    void ShowData()
    {
        std:: cout<<"Car Id : "<<CarId<<std::endl;
        std:: cout<<"Charge/hour : "<<ChargeHour<<std::endl;
        std:: cout<<"Parked Time : "<<ParkedTime<<" sec"<<std::endl;
    }
  };
  int main()
  {
    carpark car1;
    car1.SetData(101,98,10);
    car1.ShowData();

  }