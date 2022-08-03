#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of rows"<<endl;
    cin>>n;

    int row=1;
    while(row<=n){
        int col=1;
        // int val=row;
        while(col<=row){
            cout<< row+1-col<<" ";
            // val--;
            col++;
        }
        cout<<endl;
        row++;
    }
}