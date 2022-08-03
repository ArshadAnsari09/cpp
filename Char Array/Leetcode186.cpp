#include<iostream>
#include <bits/stdc++.h> 
using namespace std; 
  
void revWords(string str){ 
    stack<char> st; 
  
    for(int i = 0; i < str.length(); ++i){ 
        if(str[i] != ' '){ 
            st.push(str[i]);
        }
  
        else{ 
            while(st.empty() == false){ 
                cout << st.top(); 
                st.pop(); 
            } 
            cout << " "; 
        } 
    } 
  
    while(st.empty() == false){ 
        cout << st.top(); 
        st.pop(); 
    } 
} 
  
int main(){ 
    string s = "My name is arshad"; 
    
    revWords(s); 
    
    return 0; 
}