#include<iostream>
using namespace std;

void counting(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    }
    cout<< n <<endl;
    counting(n-1);
}
int main()
{   int n;
cin>>n;
counting(n);
    return 0;
}