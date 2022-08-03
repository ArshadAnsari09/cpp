#include<iostream>
using namespace std;
int main()
{  
    int row;
    cin>>row;
    
    //creating 2d array
    int** arr=new int*[row];
    int *numbers=new int [row];

    for(int i=0;i<row;i++){
        cout<< "Enter the numbers of cols in row "<< i <<" ";
        cin>>numbers[i];
        arr[i]=new int[numbers[i]];
    }
    
    //taking input of 2d array
    for(int i=0;i<row;i++){
        for(int j=0;j<numbers[i];j++){
            cin>> arr[i][j];
        }
    }
    cout<< endl;

    //printing 2d array
    for(int i=0;i<row;i++){
        for(int j=0;j<numbers[i];j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //releasing space of correspond array to int*[n]
    for(int i=0;i<row;i++){
        delete[] arr[i];
    }
    
    //releasing space of int*[n] values
    delete []arr;

    return 0;
}