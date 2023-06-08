//Q_2.cpp
/*Define two namespaces: Square and Cube. In both the namespaces, define an integer variable named "num" 
and a function named "fun". The "fun" function in "Square" namespace, should return the square of an
 integer passed as an argument while the "fun" function in "Cube" namespace, should return the cube of
  an integer passed as an argument. In the main function, set the integer variables "num" of both the 
  namespaces with different values. Then, compute and print the cube of the integer variable "num" of the 
  "Square" namespace using the "fun" function of the "Cube" namespace and the square of the integer variable
   "num" of the "Cube" namespace using the "fun" function of the "Square" namespace.*/


   #include<iostream>
   namespace square
   {
    int num;
    int fun(int a)
    {
        return a*a;
    }
   }
   namespace cube
   {
    int num;
    int fun(int a)
    {
        return a*a*a;
    }
   }

   int main()
   {
    square:: num=2;
    cube:: num=5;
    std::cout<<cube::fun(square::num)<<std::endl;
    std::cout<<square::fun(cube::num)<<std::endl;

   }