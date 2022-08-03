#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;
        int space=n-i;
        while(space>0){
            cout<<" "<<" ";
            space--;
        }
        int col=1;
        while(col<=i){
            cout<<i<<" ";
            col++;
        }
        cout<<endl;
        i++;
    }
}