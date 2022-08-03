#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;
        int space=i-1;
        while(space>0){
            cout<<" "<<" ";
            space--;
        }
        int col=1;
        int start=i;
        while(col<=n-i+1){
            cout<<start<<" ";
            start++;
            col++;
        }
        cout<<endl;
        i++;
    }
}