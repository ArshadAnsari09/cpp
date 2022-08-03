#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of rows in pattern"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char start='A'+n-i;
        while(j<=i){
            // char ch=('A'+n-i+j-1);
            cout<< start <<" ";
            start++;
            j++;
        }
        cout<<endl;
        i++;
    }
}