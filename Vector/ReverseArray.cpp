#include<iostream>
#include<vector>
using namespace std;

vector<int> reverseArray(vector<int> v){
    int s=0;
    int e=v.size()-1;

    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;

}

void print(vector<int> ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<< endl;
}

int main()
{   vector<int> v;
    
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    vector<int> ans=reverseArray(v);
    cout<<"Print Array after reversing"<<endl;
    print(ans);
    return 0;
}