//Q6.cpp
/*Create a class called Musicians to contain three methods string(), wind(), and perc(). Each of these methods should initialize a string array to contain the following instruments

-  veena, guitar, sitar, sarod and mandolin under string()

-  flute, clarinet saxophone, nadhaswaram, and piccolo under wind()

-  tabla, mridangam, bangos, drums and tambour under perc()

It should also display the contents of the arrays that are initialized. Create a derived class called TypeIns to contain a method called get() and show(). The get() method must display a  menu as follows

Type of instruments to be displayed

a.  String instruments

b.  Wind instruments

c.  Percussion instruments

The show() method should display the relevant detail according to our choice. The base class variables must be accessible only to their derived classes.*/

#include<iostream>

class Musicians
{
    protected:
    std::string inst[3][5];
    public:
    void string ()
    {
        inst[0][0]={"veena"};
        inst[0][1]={"guitar"};
        inst[0][2]={"sitar"};
        inst[0][3]={"sarod "};
        inst[0][4]={"mandolin "};
             for(int i=0;i<5;i++)
    {std:: cout<<inst[0][i]<<std:: endl;}
    } 
    void wind()
    {  inst[1][0]={"flute"};
        inst[1][1]={"clarinet "};
        inst[1][2]={"saxophone"};
        inst[1][3]={"nadhaswaram "};
        inst[1][4]={"piccolo  "};

        for(int i=0;i<5;i++)
    {std:: cout<<inst[1][i]<<std:: endl;}
        
    }
    void perc()
    {  inst[2][0]={"tabla"};
        inst[2][1]={"mridangam "};
        inst[2][2]={"bangos"};
        inst[2][3]={"drums"};
        inst[2][4]={"tambour"};

             for(int i=0;i<5;i++)
    {std:: cout<<inst[2][i]<<std:: endl;}
        
    }
};
class TypeIns : public Musicians
{
    enum alpha{a,b,c,};

public:
void get()

{
    std::cout<<"Type of instruments to be displayed"<<std::endl
            <<"a.String instrument"<<std::endl
            <<"b.Wind intstrument"<<std::endl
            <<"c.Percussion instrument"<<std::endl;
}
void show()
{
    char test;
    std:: cout<<"Enter the choice to view the list"<<std::endl;
    std:: cin>>test;
    if(test=='a')
    {
        std::cout<<"    a.String instrument"<<std::endl;
        string();
    }
    else if(test=='b')
    {
         std::cout<<"   b.Wind intstrument"<<std::endl;
        wind();
    }
    else if(test=='c')
     {
        std::cout <<"   c.Percussion instrument"<<std::endl;
        perc();
    }
    else
    {
        std:: cout<<"Invalid Entry"<<std::endl;
    }
    


}

};

int main()
{
    TypeIns o1;
    o1.get();
    o1.show();
}


