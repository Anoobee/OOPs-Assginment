//Q2.cpp
/*Assume that you want to check whether the number is prime or not. Write a program that asks for numbers repeatedly.
 When it finishes checking a number the program asks if the user wants to do
 another calculation. The response can be 'y' or 'n'. Don't forget to use the object-oriented concept.*/
 #include<iostream>

 class primecheck {
    private:
    int num;
    public:
    bool PrimeCheck(int n)
    {
        
        for (int i=2;i<n;i++)
        {
            if((n%i)==0)
            {
                return false;
            }
        }
        return true;
    }
 };

 int main()

 {
    char test;
    primecheck obj;
    do {
        int num;
        
        std:: cout <<"Enter any number "<<std:: endl;
        std:: cin>>num;
        if(obj.PrimeCheck(num)==true and num>1)
        {
            std::cout<<"It is a prime number"<<std::endl;
        }
        else
        {
            std::cout<<"It is not a prime number"<<std::endl;
        }
      
       do
        {
              std:: cout<<"Do you want to check more? (y/n)"<<std::endl;
        std::cin>>test;
          
        } while(test!='y' and test!='n');

    }while(test=='y');
 }