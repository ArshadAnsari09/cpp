#include<iostream>
using namespace std;

int  largestRowSum(int arr[][4],int row,int col){
    
    int maxi=INT_MIN;
    int rowIndex=-1;
    int i=0;
    for(;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        if(sum > maxi){
            maxi=sum;
            rowIndex = i+1;
        }
        cout<<sum << endl;
    }
    return rowIndex;
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

   int ans=largestRowSum(arr,3,4);
   cout<<ans<<endl;
    return 0;
}