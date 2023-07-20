//Q5.cpp
//error
/* Write a program for transaction processing that write and read object randomly to and from 
a random access file so that user can add, update, delete and 
display the account information (account-number, last-name, first-name, total-balance).*/

#include<iostream>
#include<fstream>

class Account
{
    private:
    std::string first_name, last_name;
    int account_number;
    float total_balance;
    
    public:
    // Display function 
    void Display()
    {
        std::cout<<"Account Details"<<std::endl
                
                 <<"Acount Number : "<<account_number<<std::endl
                 <<"Name : "<<first_name<<" "<<last_name<<std::endl
                 <<"Total Balance : Rs."<<total_balance<<std::endl;
    }
    void SetData()
    {
        std::cout<<"Enter the Details"<<std::endl;
        std::cout<<"Acount Number : ";
                         std::cin>>account_number;
        std::cout<<"First Name : ";
                         std::cin>>first_name;
        std::cout<<"Last Name : ";
                         std::cin>>last_name;
        std::cout<<"Total Balance : ";
                         std::cin>>total_balance;
     

    }
    void Add()
    {
        SetData();
        std::ofstream ofile("StudentBank.txt", std::ios::app | std::ios::out);
        ofile.write(reinterpret_cast<char*> (this), sizeof(*this));
        ofile.close();

    }
    void Update()
    {
        int AccNo;
        std::cout<<"Enter the account number to update : ";
        std::cin>>AccNo;

        Account load, update;
        // reading from the file
            std::ifstream ifile("StudentBank.txt", std::ios::in | std::ios::app);
            ifile.seekg((account_number-1)*sizeof(*this));
            ifile.read(reinterpret_cast<char*> (&load), sizeof(load));
            ifile.close();
    
        // display
        load.Display();
        std::cout<<"Updating to : "<<std::endl;

        // updating the data
        update.SetData();
        std::ofstream ofile("StudentBank.txt", std::ios::app | std::ios::out);
                    ofile.seekp((account_number-1)*sizeof(*this));
        ofile.write(reinterpret_cast<char*> (&update), sizeof(update));
        ofile.close();

        
    }
    
    void Del()
    {
        int AccNo;
        std::cout<<"Enter the account number to delete : ";
        std::cin>>AccNo;
        
        Account del;
        del.account_number = -1; // making the account number -1 to show as delete

        std::ofstream ofile("StudentBank.txt", std::ios::app | std::ios::out);
                    ofile.seekp((account_number-1)*sizeof(*this));
        ofile.write(reinterpret_cast<char*> (&del), sizeof(del));
        ofile.close();
    }

    void FileDisplay()
    {
        int AccNo;
        std::cout<<"Enter the account number to Display : ";
        std::cin>>AccNo;

        Account load, update;
        // reading from the file
            std::ifstream ifile("StudentBank.txt", std::ios::in);
            ifile.seekg((account_number-1)*sizeof(*this));
            ifile.read(reinterpret_cast<char*> (&load), sizeof(load));
            ifile.close();
    
        // display
        load.Display();
    };
};
int  TaskList()
{
    int index;
    std::cout<<"What do you want to do?"<<std::endl
             <<"1. ADD"<<std::endl
             <<"2. Update"<<std::endl
             <<"3. Delete "<<std::endl
             <<"4. Display"<<std::endl;
    std::cin>>index;
    if(index<1 or index>4)
    {
        std::cout<<"Enter between 1 to 4 only"<<std::endl;
        TaskList();
    }
    return index;
}

int main()
{
    int task_no = TaskList();
    Account one;
    switch (task_no)
    {
    case 1:
        one.Add();
        break;
    case 2:
        one.Update();
        break;
    case 3:
        one.Del();
        break;
    case 4:
        one.FileDisplay();
    default:

        break;
    }
}