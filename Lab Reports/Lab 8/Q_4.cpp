//Q4.cpp
/*Write a program that stores the information about students (name, student id, department, and address) 
in a structure and then transfers the information to a file in your directory. 
Finally, retrieve the information from your file and print it in the proper format on your output screen.*/

#include<iostream>
#include<fstream>
struct student {
private:
std::string name, id, department, address;
public:
student()
{
    std::cout<<"Enter the name of the student : ";
    std::getline(std::cin, name);

    std::cout<<"Enter the id of the student : ";
    std::getline(std::cin, id);

    std::cout<<"Enter the department of the student : ";
    std::getline(std::cin, department);

    std::cout<<"Enter the address of the student : ";
    std::getline(std::cin, address);
}
friend std::ostream& operator <<(std::ostream& os, student &s);


};
std::ostream& operator <<(std::ostream& os, student &s)
{
    os<<"Name : "<<s.name<<std::endl
    <<"Id : "<<s.id<<std::endl
    <<"Department : "<<s.department<<std::endl
    <<"Address : "<<s.name<<std::endl;
}
int main()
{
    student s1;
    std::ofstream ofile("student.dat",std::ios::binary);
    ofile.write(reinterpret_cast<char*>(&s1), sizeof(s1));
    ofile.close();
    student s2;
    std::ifstream ifile("student.dat",std::ios::binary);
    ifile.read(reinterpret_cast<char*>(&s2), sizeof(s2));
    ifile.close();
    std::cout<<s2;



}