#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i=n;i>0;i--){
        for(int j=0;j<=n;j++){
            if(j>=i) cout<<"* ";
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    pattern(n);
    return 0;
}