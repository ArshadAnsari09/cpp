#include<iostream>
using namespace std;

int findNthTermOfAP(int n){
    int nthTerm=(3*n+7);
    return nthTerm;
}

int main(){
    int n;
    cout<< "Enter the nth term of AP"<< endl;
    cin >> n;
    int ans=findNthTermOfAP(n);
    cout<< ans <<endl;

}