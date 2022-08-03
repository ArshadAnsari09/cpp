#include<iostream>
using namespace std;
int main(){
    char ch;
    cin >> ch;

    if(ch>='A' && ch<='Z'){
        cout<<"This is uppercase letter" <<endl;
    }else if(ch>='a' && ch<='z'){
        cout<<"This is lowercase letter" <<endl;
    }else{
        cout<<"This is numeric" << endl;
    }
}