#include<bits/stdc++.h>
using namespace std;

void rev_pyrd(int n){
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    rev_pyrd(n);
    return 0;
}