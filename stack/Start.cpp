#include<iostream>
#include<stack>

using namespace std;
int main()
{   
    stack<int> s;

    s.push(2);
    s.push(4);
    s.push(6);

    s.pop();
    cout<<s.top()<<endl;
    cout<<"Size of stack: "<<s.size()<<endl;
    cout<<"Stack is empyt or not :"<<s.empty()<<endl;
    return 0;
}