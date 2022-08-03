#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of Numbers"<<endl;
    cin>>n;
    bool isPrime=true;

    for(int i=2;i<=n-1;i++){
       if(n%i == 0){
        isPrime=false;
        break;
       }
    }
    if(isPrime == true){
        cout<<"It is a Prime number"<<endl;
    }else{
        cout<<"Not a Prime number"<<endl;
    }
}