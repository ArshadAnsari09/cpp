#include<iostream>
using namespace std;
int glob=1; //global varaible

void a(int& i){
    cout<<i<<endl;
     cout<<glob<<endl;
    glob++;
   
}
int main()
{   
    int i=9;
    a(i);
    cout<<glob<<endl;
    return 0;
}