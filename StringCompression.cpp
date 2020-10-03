#include<bits/stdc++.h>
using namespace std;

string func(string str){
    int n = str.length();
    map<char,int>mp;
    for(auto i:str){
        mp[i]++;
    }
    string final;
    int count=n;
    for(auto i:mp){
        if(i.second==1){
            count--;
        }
        final.append(i.first + to_string(i.second));
    }
    if(count==0){
        return str;
    } else {
        return final;
    }
}

int main(){
    string str;
    cin>>str;
    cout<<func(str);
    return 0;
}