// Q2.cpp
/*Write a class template for queue class. Assume the programmer using the queue won't make mistakes,
 like exceeding the capacity of the queue or trying to remove an item when the queue is empty. 
 Define several queues of different data types and insert and remove data from them.

*/
#include<iostream>
#include<string>
template<class T>
class queue
{
    private:
    static int count ;
    T* que ;
   
    public:
     queue(){
    que = new T[100];

    }
    void insert( T add)
    {
        que[count++]=add;
    }
    void remove( )
    {
      T temp[count-1] ;
      for(int i=0;i<count-1;i++)
      {
        temp[i]=que[i];
      }
      delete[] que;
      que = new T[100];
     for(int i=0;i<count-1;i++)
      {
        que[i]=temp[i];
      }
        count--;
    }
    void Display()
    {
        for(int i=0;i<count;i++)
        {
            std::cout<<que[i]<<std::endl;
        }
    }
    ~queue()
    {
        delete []que;
    }

};
template<class T>
 int queue<T>:: count =0;

int main()
{
    queue<int> obj;
    obj.insert(1);
    obj.insert(2);
    obj.insert(3);
    obj.insert(4);
    obj.Display();
    obj.remove();
    obj.remove();
    obj.remove();
    obj.Display();
    return 0;
}