#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <pair<int,int>> vect;
    int arr1[]={1,4,6,9};
    int arr2[]={2,5,3,8};
    int n=sizeof(arr1)/sizeof(arr2);
    for(int i=0;i<n;i++){
        vect.push_back(make_pair(arr1,arr2));
    }
    for(int i=0;i<n;i++){
        cout<<vect[i].first<<" "<<vect[i].second<<endl;
    }
    return 0;
        
}