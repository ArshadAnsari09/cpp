#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot=arr[s];

    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i] <= pivot){
          count++;
        }
    }

    int pivotIndex=s+count;
    swap(arr[pivotIndex],arr[s]);

    int i=s;
    int j=e;

    while(i< pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }

        if(i< pivotIndex && j > pivotIndex)
        swap(arr[i++],arr[j--]);
    }
    return pivotIndex;
}

    void quickSort(int arr[],int s,int e){
        //base case
        if(s > e)
        return;
        
        //do partition acc to quick sort algo
        int p=partition(arr,s,e);  

        //left part
        quickSort(arr,s,p-1);

        //right part
        quickSort(arr,p+1,e); 
    }
int main()
{   int arr[7]={4,2,3,-5,5,-9,0};
    int n=7;
    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    cout<<endl;
    return 0;
}