#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of Numbers"<<endl;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
        
    }
    cout<< "Sum of n numbers: "<<sum<<endl;
}