#include<iostream>
using namespace std;

int main(){
    //declaring an array
    int number[14];

    cout<< "Value at 13 index "<< number[13]<< endl;
    //  cout<< "Value at 35 index is "<< number[35]<< endl;
    int second[15]={2,7};
    int n=15;
    cout << "Printing an array"<<endl;
    //printing an array
    for(int i=0;i<n;i++){
        cout<< second[i]<<" ";
    }
}