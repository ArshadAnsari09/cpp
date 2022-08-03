#include<iostream>
using namespace std;
int main()
{   
    int n=8;
    int *p=&n;
    cout<<"Value of p poynting " <<*p<<endl;

    //copying pointer to pointer
    int *q=p;
    cout<< *q <<endl;


    return 0;
}