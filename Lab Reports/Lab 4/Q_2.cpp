// Q2.cpp
/*Write a program that has a class with a dynamically allocated character 
array as its data member. One object should contain "Engineers are" and another 
should contain " Creatures of logic". Member function join() should concatenate
 two strings by passing two objects as arguments. Display the concatenated string 
 through a member function. Use constructors to allocate and initialize the data member.
  Also, write a destructor to free the allocated memory for the character array.
 Make your own function for the concatenation of two strings.*/

 #include<iostream>
 #include<cstring>


class characters
{
    private:
    char *ptr;
    int n;
    public:
    char* GetData(){ return ptr;}
    characters (const char a[])
    {
            n=strlen(a);
           
         ptr =new char [n+1];
         strcpy(ptr, a);

    }
    void join (characters c1,characters c2)
    {
        strcpy(ptr,c1.GetData());
        int k=(strlen(c1.GetData())+strlen(c2.GetData()));
        
        for(int i=strlen(c1.GetData());i<=k;i++)
        {
            
            ptr[i]=c2.GetData()[i-strlen(c1.GetData())];

        }
    }
    void Display()
    {
        std:: cout<<ptr<<std:: endl;
    }
   ~characters()
   {
     delete ptr;
   }
 
};

 int main()
{
  characters c1("Engineers are"),c2(" Creatures of logic"),c3("a");
  c3.join(c1,c2);
    c3.Display();

}