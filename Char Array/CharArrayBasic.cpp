#include<iostream>
using namespace std;

int getLength(char name[]){
    int count=0;
     for(int i=0;name[i]!='\0';i++){
        count++;
     }
     return count;
}
int main()
{   
    char name[10];
    cout<< "Enter your name"<<endl;
    cin >> name;

    cout<<"Your name is ";
    cout << name << endl;
    int len= getLength(name);
    cout<<"Length of char Array is "<<len<<endl;
    return 0;
}