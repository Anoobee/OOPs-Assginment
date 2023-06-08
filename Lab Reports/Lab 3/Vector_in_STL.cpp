#include<iostream>
#include<vector>
using namespace std;

template<class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<" ";
      // cout<<v.at(i)<< " "; // same as above
    }
    cout<<endl<<"Display function is invocked"<<endl;
}
int main()
{
    /*
    vector<int> vec1;
    int element, size;
    cout<<"Enter the size of the Vector"<<endl;
    cin>>size;
    for (int  i = 0; i < size; i++)
    {
         cout<<"Enter the element to add to this vector"<<endl;
         cin>>element;
         vec1.push_back(element); // fill the element


    }*/
    //vec1.pop_back(); removes the last element
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter + 1,7); // insert the 7 in the second poisiton of vector
    // vec1.insert(iter + 1, 40,7); // insert the 7(quantity = 40) in the second poisiton of vector


    // display(vec1);

    vector<int> vec1;
    // display(vec1);

    
    vector<char> vec2(4); // creates the vector of size 4
    // vec2.push_back('A');
    // display(vec2);
    cout<<vec2.size();
    vector<char> vec3(vec2); // creates copy of vect2
    // display(vec3);

    // vector<int> vec4(5,7); // creates int vector of size 5 with all element as 7
    // display(vec4);

    vector<string> vec5(4,"7+7i");// create string vector of size 4 with all element "7+7i"
    // display(vec5);




    return 0;
}