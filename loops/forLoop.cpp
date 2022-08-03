#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    // cin>>n;

    cout<<"Printing count from 1 to n"<<endl;
    
    // int i=1;
    // for(;i<=n;){
    //     cout<<i<<endl;
    //     i++;
    // }

    for(int a=0,b=1;a>=0 && b>=0;a--,b--){
        cout<<a<<" "<<b<<endl;
    }
}