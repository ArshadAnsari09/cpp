#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl;
}

void swapAlternative(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
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
    cout<< "Array before swaping is: "<<endl;
    printArray(arr,size);

    swapAlternative(arr,size);
    cout<< "Array after swapping is: "<<endl;
    printArray(arr,size);
    return 0;
}