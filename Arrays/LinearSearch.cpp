#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}
int main()
{   
    int arr[10]={5,7,-3,10,22,-9,0,5,1,24};
//whether 1 is present in it or not?
    cout<< "Enter the element to search for "<<endl;
    int key;
    cin>>key;
    bool found=search(arr,10,key);
    if(found){
        cout<<"Key is found"<<endl;
    }else{
        cout<<"Key is not found"<< endl;
    }

    return 0;
}