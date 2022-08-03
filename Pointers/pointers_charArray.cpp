#include<iostream>
using namespace std;
int main()
{   
    // char ch[6]="abcde";
    // cout<<"char array address : "<< ch<<endl;
    // cout<<"char array address : "<< &ch<<endl;
    //  cout<<"char array address : "<< &ch[0]<<endl;
    //  char *c=&ch[0];
    // cout<<"char array address : "<< c<<endl;
    // char temp='z';
    // char *p=&temp;
    // cout<< p <<endl;
    // return 0;
  char st[] = "ABCD";
  for(int i = 0; st[i] != '\0'; i++) {
     cout << st[i] << *(st)+i << *(i+st) << i[st];
  }
  return 0;
}