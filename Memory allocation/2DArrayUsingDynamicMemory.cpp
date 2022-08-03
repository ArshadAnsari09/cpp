#include<iostream>
using namespace std;
int main()
{  
    int row;
    cin>>row;
    int col;
    cin>>col;
    
    //creating 2d array
    int** arr=new int*[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }
    
    //taking input of 2d array
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>> arr[i][j];
        }
    }

    //printing 2d array
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
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