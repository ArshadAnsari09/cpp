#include<iostream>
using namespace std;

bool isPresent(int arr[][4],int target,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           if(arr[i][j] == target){
            return true;
           }
        }
    }
    return false;
}

int main()
{   
    int arr[3][4];

    cout<< "Enter the elements of 2d array "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }

    cout << "Print 2d Array "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j] <<" ";
        }
        cout<<endl;
    }

    cout << "Search element from 2d array "<<endl;
    int target;
    cin >> target;

    if(isPresent(arr,target,3,4)){
        cout<< "Element found"<<endl;
    }else{
        cout << "Element not found"<<endl;
    }
    return 0;
}