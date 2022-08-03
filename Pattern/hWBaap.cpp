#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter the value of n"<<endl;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j<<" ";
            j++;
        }

        int k=1;
        while(k<=2){
        int leftStar=i-1;
        while(leftStar>0){
            cout<<"*"<<" ";
            leftStar--;
        }
        k++;
        }

        // int rightStar=i-1;
        // while(rightStar>0){
        //     cout<<"*"<<" ";
        //     rightStar--;
        // }

        int rightNumber=1;
        while(rightNumber<=n-i+1){
            cout<<rightNumber<<" ";
            rightNumber++;
        }
        cout<<endl;
        i++;
    }
}