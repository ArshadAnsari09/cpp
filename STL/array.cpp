#include<iostream>
#include<array>
using namespace std;
int main()
{   
    array<int,4> a={1,2,3,4};
    int size=a.size();  //size of an stl array

    for(int i=0;i<size;i++){   //print stl array
        cout<<a[i]<<endl;
    }

   cout<<"Element at 2nd index"<< a.at(2)<<endl;
   cout<<"Check element is empty : "<< a.empty()<<endl;
   cout<<"First Element is "<< a.front()<<endl;
   cout<<"Last Element is "<< a.back()<<endl;

    return 0;
}