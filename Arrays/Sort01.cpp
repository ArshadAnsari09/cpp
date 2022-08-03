#include<iostream>
using namespace std;

void sort01(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]==0){
            i++;
        }else if(arr[j]==1){
            j--;
        }else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    cout<< endl;
}

int main()
{   
    int arr[100];
    int size;
    cout<< "Enter the size of an array"<<endl;
    cin >> size;

    for(int i=0;i<size;i++){
        cin >> arr[i];
    }

    cout<< "Array before sorting"<< endl;
    printArray(arr,size);

    cout<< "Array after sorting 0,1"<<endl;
    sort01(arr,size);
    printArray(arr,size);
    return 0;
}