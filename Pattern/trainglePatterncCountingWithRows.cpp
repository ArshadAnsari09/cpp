#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of rows"<<endl;
    cin>>n;

    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<< row+col-1 <<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}