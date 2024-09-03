#include<bits/stdc++.h>
using namespace std;

void rpyrd(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if (j>=i) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    rpyrd(n);
    return 0;
}