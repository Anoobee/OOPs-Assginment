//Q4.cpp
/*Write three derived classes inheriting functionality of base class person 
(should have a member function that asks to enter name and age) and with added 
unique features of student, and employee, and functionality to assign, change and
 delete records of student and employee. And make one member function for printing
  the address of the objects of classes (base and derived) using this pointer. Create 
  two objects of the base class and derived classes each and print the addresses of individual 
  objects. Using a calculator, calculate the address space occupied by each object and verify this
   with address spaces printed by the program.*/

   #include<iostream>

   class Person
   {
    protected:
    int *age =new int ;
    std:: string *Name = new std::string;
    public:
    Person(std:: string name)
    {
        *Name=name;
    }
    void getInfo()
    {
        std::cout<<"Enter the name "<<std::endl;
        std:: cin>>*Name;
        std::cout<<"Enter the age "<<std::endl;
        std:: cin>>*age;

    }
   
    void DisplayAddress()
{
    std::cout<<this<<std::endl;
}
void remove()
{
    delete Name, age;
}
   };
   class Student: public Person
   {
    protected:
    int *rollNo= new int;
    public:
    Student(std:: string name, int roll):Person(name)
    {
        *rollNo=roll;
    }
       void DisplayAddress()
{
    std::cout<<this<<std::endl;
}
void remove()
{
    delete Name, age,rollNo;
}
  
   };
   
   
   class employee: public Person
   {
    protected:
    int *EId =new int ;
    public:
        void DisplayAddress()
{
    std::cout<<this<<std::endl;
}
 employee(std:: string name ,  int id):Person(name)
 {
    *EId=id;
 }
 void remove()
{
    delete Name, age,EId;
}
   };

   int main()
   {
    Person p1("anup");
    Student s1("aryal",10);
    employee e1("nobita",200);
     
    std::cout<<sizeof(p1)<<std::endl;
    std::cout<<sizeof(s1)<<std::endl;
    std::cout<<sizeof(e1)<<std::endl;
     p1.DisplayAddress();
     s1.DisplayAddress();
     e1.DisplayAddress();
     p1.remove();
         std::cout<<sizeof(p1)<<std::endl;

     

   }
   