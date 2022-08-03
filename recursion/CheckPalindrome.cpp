#include<iostream>
using namespace std;

bool isPalindrome(string& str,int i){
    if(i > str.length()-1)
    return true;

    if(str[i] != str[str.length()-i-1]){
        return false;
    }else{
        return isPalindrome(str,i+1);
    }
}

int main()
{   string str="aabbaa";
    bool ans=isPalindrome(str,0);
    if(ans){
        cout<< "It's a palindrome"<<endl;
    }else{
        cout<< "It's not a palindrome"<<endl;
    }
    return 0;
}