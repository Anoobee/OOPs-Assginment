// Q3.cpp
/*Modify the stack class given in the previous lab to add the exception when a user
 tries to add an item while the stack is full and when the user tries to add the item
  while the stack is empty. Throw exceptions in both of the cases and handle these exceptions.

*/



#include<iostream>
#include<string>
class FULLSTACK{};
class EMPTYSTACK{};
template<class T>
class stack
{
    private:
    static int count ;
    T* stk ;
   
    public:
     stack(){
    stk = new T[100];

    }
    void insert( T add)
    {
        count++;
        if(count>99)
        throw FULLSTACK();
        stk[count-1]=add;
    }
    void remove( )
    {
      T temp[count-1] ;
      if(count-1<0)
      throw EMPTYSTACK();

      for(int i=0;i<count-1;i++)
      {
        temp[i]=stk[i];
      }
      delete[] stk;
      stk = new T[100];
     for(int i=0;i<count-1;i++)
      {
        stk[i]=temp[i];
      }
        count--;
    }
    void Display()
    {
        for(int i=0;i<count;i++)
        {
            std::cout<<stk[i]<<std::endl;
        }
    }
    ~stack()
    {
        delete []stk;
    }

};
template<class T>
 int stack<T>:: count =0;

int main()
{
    stack<int> obj;
    try{
    obj.insert(1);
    obj.insert(2);
    obj.insert(3);
    obj.insert(4);
    obj.Display();
    obj.remove();
    obj.remove();
    obj.remove();
    obj.remove();
    obj.remove();
    obj.Display();
    }
    catch(FULLSTACK)
    {
        std::cout<<"STACK FULL ! No more data can be added"<<std::endl;
    }
    catch(EMPTYSTACK)
    {
        std::cout<<"STACK EMPTY ! "<<std::endl;
    }
    return 0;
}