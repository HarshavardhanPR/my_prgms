#include<bits/stdc++.h>
using namespace std;

void pyrd(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    pyrd(n);
    return 0;
}