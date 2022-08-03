#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int x){
    int start=0,end=n-1;
     int mid;
    while(start<=end){
       mid=start+(end-start)/2;
       if(arr[mid]==x){
        return mid;
       }else if(x > arr[mid]){
        start=mid+1;
       }else{
        end=mid-1;
       }
    }
    return -1;
}
int main()
{   
    int arr[100];
    int size;
    cout<< "Enter the size of array"<<endl;
    cin>> size;

    int key;
    cout<< "Enter the key element to find"<<endl;
    cin>> key;
    
    cout<<" Enter the element in an array"<<endl;
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout<< endl;

    int ans = binarySearch(arr,size, key);
    cout<<ans<<endl;

    return 0;
}