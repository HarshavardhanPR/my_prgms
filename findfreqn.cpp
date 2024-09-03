#include<bits/stdc++.h>
using namespace std;
void findfreq(int arr[],int n){
    for(int j=0;j<n;j++){
        arr[j]=arr[j]-1;
    }
    for(int i=0;i<n;i++){
        arr[arr[i]%n]=arr[arr[i]%n]+n;
    }
    for(int i=0;i<n;i++){
        cout<<i+1<<"->"<<arr[i]/n<<endl;
    }
}
int main(){
    int n;
    int arr[]={1,2,2,4,3,6,2,8,1,9};
    n=sizeof(arr)/sizeof(arr[0]);
    findfreq(arr,n);
    return 0;
}