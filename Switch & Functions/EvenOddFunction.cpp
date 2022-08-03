#include<iostream>
using namespace std;

//1 -> Even
//0 -> Odd

bool isEvenOrOdd(int n){
    bool isEven=false;
    if(n%2 == 0){
        isEven=true;
        return isEven;
    }
    return isEven;
}

int main(){
    int num;
    cin >> num;

    bool ans=isEvenOrOdd(num);
    if(ans){
         cout<< "Number is Even" << endl;
    }else{
         cout<< "Number is Odd" << endl;
    }
}