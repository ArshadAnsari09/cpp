#include<iostream>
using namespace std;
int mergeSort(int *arr,int s,int mid,int e){
    int inv_count=0;
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
        if(first[index1] <= second[index2])
           arr[mainIndex++]=first[index1++];
        else
         arr[mainIndex++]=second[index2++]; 
         inv_count+=len1-index1;
    }
    while(index1 < len1){
        arr[mainIndex++]=first[index1++];
    }
    while(index2 < len2){
        arr[mainIndex++]=second[index2++];
    }

    delete []first;
    delete []second;
    return inv_count;
}
int merge(int *arr,int s,int e){
    int inv_count=0;
    //base case
    if(e>s){
    int mid=s+(e-s)/2;

    //first part
    inv_count+=merge(arr,s,mid);

    //second part
    inv_count+=merge(arr,mid+1,e);

    //mergeSort
    inv_count+=mergeSort(arr,s,mid,e);
    }
    return inv_count;
}
int main()
{   int arr[4]={8,4,2,1};
    int n=4;
    cout<<merge(arr,0,n-1)<<endl;

    return 0;
}