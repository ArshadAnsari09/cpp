#include<iostream>
using namespace std;
int main(){
    int a,b;

    cout<< "enter the value of a "<<endl;
    cin >> a;
    // cout<< "enter the value of b "<<endl;
    // cin>>b;

    // cout<<"value of a and b are :"<< a <<" "<< b<<endl;
        cout<<"value of a is :"<< a <<endl;
    if(a>0){
        cout<< "a is positive number"<<endl;
    }else if(a<0){
        cout<<" a is negative"<<endl;
    }else{
         cout<<" a is zero"<<endl;
    }
}