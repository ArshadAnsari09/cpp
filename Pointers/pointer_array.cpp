#include<iostream>
using namespace std;
int main()
{   
    int arr[5]={1,2,3,4,5};
    cout<< "Address of an array "<< arr <<endl;
    cout<< "Address of an array "<< &arr <<endl;
    cout<< "Address of an array "<< &arr[0] <<endl;
    cout<< "Value of an array at index *arr -> 0th index : "<< *arr <<endl;
     cout<< "Value of an array  *arr+7: "<< *arr+7 <<endl;
    cout<< "Value of an array at 4th index: "<< arr[4] <<endl; 
    cout<< "Value of an array at 4th index *(arr+4): "<< *(arr+4) <<endl;

    int arr2[6]={22,34,56,78,24,57};
    cout<<"size of arr[3]: "<< sizeof(arr2[3])<<endl;
    // arr2=arr2+1 -> errror not possiblle
    int *ptr=&arr2[0];
    cout<< "value stored in ptr" <<*ptr<<endl;
    cout<<"addess of arr2 : "<< &arr2<<endl;
    cout<<"addess of ptr: "<< ptr<<endl;  //stores address of arr2
    cout<<"addess of ptr: "<< &ptr<<endl;   //pointers address
    cout<<"size of ptr: "<< sizeof(ptr)<<endl;
    cout<<"size of ptr: "<< sizeof(&ptr)<<endl;
    cout<<"size of arr2: "<< sizeof(arr2)<<endl;   //4*6=24
    cout<<"size of arr[3]: "<< sizeof(&arr2[3])<<endl;

    ptr=ptr+1;
    cout<< *ptr<<endl;
    
    return 0;
}