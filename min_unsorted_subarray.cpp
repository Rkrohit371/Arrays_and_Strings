#include<bits/stdc++.h>
using namespace std;

void func(vector<int>&arr, int n){
    int left=-1;
    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            left = i;
            break;
        }
    }
    if(left==-1){
        return;
    }
    int right=-1;
    for(int i=n-1;i>0;i--){
        if(arr[i] < arr[i-1]){
            right = i;
            break;
        }
    }
    int minv = arr[left];
    int maxv = arr[left];
    for(int i=left+1;i<=right;i++){
        minv = min(arr[i], minv);
        maxv = max(maxv, arr[i]);
    }
    for(int i=0;i<=left;i++){
        if(minv < arr[i]){
            left = i;
            break;
        }
    }
    for(int i=n-1;i>=right;i--){
        if(maxv > arr[i]){
            right = i;
            break;
        }
    }
    cout<<arr[left]<<" "<<arr[right]<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    func(arr, n);
    return 0;
}