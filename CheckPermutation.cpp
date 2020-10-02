#include<bits/stdc++.h>
using namespace std;

bool func(string s, string t){
    int n=s.length();
    int m=t.length();
    if(n != m){
        return false;
    }
    int letters[256]={0};
    for(auto i : s){
        letters[i]++;
    }
    for(int i=0;i<m;i++){
        int c=t[i];
        letters[c]--;
        if(letters[c]<0){
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        if(func(s,t)){
            cout<<"True"<<endl;
        } else {
            cout<<"False"<<endl;
        }
    }
    return 0;
}