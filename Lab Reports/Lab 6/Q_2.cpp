//Q2.cpp
/* Write two classes to store distances in meter-centimeter and feet-inch systems respectively.
 Write conversions functions so that the program can convert objects of both types.*/

 #include<iostream>
class FT_distance ;
 class SI_distance;
 class SI_distance{
    private:
    int meter;
    int centimeter;
    public:
   
    SI_distance(float dist=0)
    {
        meter=dist;
        centimeter=(dist-meter)*100;
    }
    void Display( )
    {
        std::cout<<meter<<" meter "<< centimeter<<" centimeter"<< std:: endl;
    }
    
    FT_distance  toFT_distance(  SI_distance d);
 };
 class FT_distance{
    private:
    int feet;
    int inch;
    public:
   
    FT_distance(float dist=0)
    {
        feet=dist;
        inch=(dist-feet)*12;
    }
    void Display()
    {
        std::cout<<feet<<" feet "<< inch<<" inch"<< std:: endl;
    }
    SI_distance toSI_distance(  FT_distance d);
   
 };
   SI_distance FT_distance:: toSI_distance(  FT_distance d)
    {
        float total = d.feet + (d.inch/12.0);
        SI_distance d1((total * 0.3048));
        return d1;     
    }
 FT_distance SI_distance :: toFT_distance(  SI_distance d)
    {
        float total = d.meter + d.centimeter*0.01;
        FT_distance d1((total *3.28084));
        return d1;     
    }
 int main()
 {
    SI_distance d5(100.89),d3;
    FT_distance d2(14.68),d4;
    d5.Display();
    d2.Display();
    d4=d5.toFT_distance(d5);
    d4.Display();
    d3=d2.toSI_distance(d2);
    d3.Display();
return 0;
 }