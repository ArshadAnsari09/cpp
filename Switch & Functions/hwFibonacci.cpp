#include<iostream>
using namespace std;
int findPosition(int n){
    int a=0,b=1;
    for(int i=3;i<=n;i++){
        int c=a+b;
        a=b;
        b=c;
    }
    return b;
}
int main(){
    int n;
    cout<<"Enter the element do you want to find from  Fibonacci Series"<<endl;
    cin >> n;
    int ans=findPosition(n);
    cout<< ans <<endl;

}