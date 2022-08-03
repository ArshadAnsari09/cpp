#include<iostream>
using namespace std;
void mergeSort(int *arr,int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid+1-s;
    int len2=e-mid;
    int *first=new int[len1];
    int *second=new int [len2];

    int mainIndex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainIndex++];
    }

     mainIndex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainIndex++];
    }

    
    int index1=0;
    int index2=0;
    mainIndex=s;
    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2])
           arr[mainIndex++]=first[index1++];
        else
         arr[mainIndex++]=second[index2++];  
    }
    while(index1 < len1){
        arr[mainIndex++]=first[index1++];
    }
    while(index2 < len2){
        arr[mainIndex++]=second[index2++];
    }

    delete []first;
    delete []second;
}
void merge(int *arr,int s,int e){
    //base case
    if(s >= e){
        return;
    }
    int mid=s+(e-s)/2;

    //first part
    merge(arr,s,mid);

    //second part
    merge(arr,mid+1,e);

    //mergeSort
    mergeSort(arr,s,e);
}
int main()
{   int arr[15]={1,6,3,1,0,89,4,3,6,0,12,5,35,6,2};
    int n=15;
    merge(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}