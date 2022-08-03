#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the value of n"<<endl;
    cin>>n;
    int row=1;
    while(row<=n){
        //printing space
        int space=n-row;
        while(space>0){
           cout<<" "<<" ";
           space--;
        }
       //printing left side portion number

       int j=1;
       while(j<=row){
          cout<<j<<" ";
          j++;
       }

       //printing right side numbe

      int start=row-1;
       while(start>0){
        cout<<start<<" ";
        start--;
       }
       cout<<endl;
       row++;

    }
}