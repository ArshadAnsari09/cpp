#include<iostream>
using namespace std;
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
    return 0;
}