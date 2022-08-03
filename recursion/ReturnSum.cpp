#include<iostream>
using namespace std;
int getSum(int arr[],int size){
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }

    int remainingPart=getSum(arr+1,size-1);
    return arr[0]+remainingPart;
}
int main()
{   
    int arr[6]={1,2,3,4,5,6};
    int size=6;
    int ans=getSum(arr,6);
    cout<< ans;
    return 0;
}