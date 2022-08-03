#include<iostream>
using namespace std;

void printArray(int arr[],int  size){
    for(int i=0;i<size;i++){
        cout<< arr[i]<<" ";
    }
    cout<< endl;
}

void reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main()
{   
    int arr[100];
    int size;
    cin >> size;

    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout<< "Array before reversing is: "<<endl;
    printArray(arr,size);
    
    reverse(arr,size);
    cout<< "Array after reversing is: "<<endl;
    printArray(arr,size);

    return 0;
}