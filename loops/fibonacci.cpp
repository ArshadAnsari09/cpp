#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of Numbers"<<endl;
    cin>>n;

    int start=0;
    int next=1;
    cout<<start<<" "<<next<<" ";
    for(int i=1;i<=n;i++){
        int nextNumber=start+next;
        cout<<nextNumber<<" ";
        start=next;
        next=nextNumber;
    }
}