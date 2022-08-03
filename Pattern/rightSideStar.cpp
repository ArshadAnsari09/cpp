#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of rows in pattern"<<endl;
    cin >> n;

    int i=1;
    while(i<=n){
        //print space
        int space=n-i;
        while(space>0){
            cout<<" "<<" ";
            space--;
        }
        //print star
        int star=1;
        while(star<=i){
            cout<<"*"<<" ";
            star++;
        }
        cout<<endl;
        i++;
    } 
}
