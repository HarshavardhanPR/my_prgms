#include<bits/stdc++.h>
using namespace std;

int findsum(int arr[],int n){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    int sum=0;

    for(auto itr=mp.begin();itr!=mp.end();itr++){
        if(itr->second%2!=0){
            sum+=(itr->first)*(itr->second);
        }

    }
    return sum;
}
int main(){
    int arr[]={1,2,3,4,1,2,4,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<findsum(arr,n);
}