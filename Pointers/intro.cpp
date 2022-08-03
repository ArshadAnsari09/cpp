#include<iostream>
using namespace std;
int main()
{   
    int n=5;
    cout << "Value of num is "<<endl;
    cout << n<<endl;
    cout<< "Address of number is : "<<&n<<endl;

    int *ptr=&n;
    cout<<"Value of pointer is : " <<*ptr<< endl;
    return 0;
}