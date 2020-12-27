#include<bits/stdc++.h>
using namespace std;

int func(int arr[], int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return -1;
    }
    int left[n], right[n];
    left[0] = arr[0];
    right[n-1] = arr[n-1];
    for(int i=1;i<n;i++){
        left[i] = left[i-1] + arr[i];
    }
    for(int i=n-2;i>=0;i--){
        right[i] = right[i+1] + arr[i];
    }
    for(int i=1;i<n-1;i++){
        if(left[i-1] == right[i+1]){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<func(arr, n);

    return 0;
}