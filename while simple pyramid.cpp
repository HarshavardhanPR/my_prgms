#include<bits/stdc++.h>
using namespace std;

void pyd(int n){
    int i=0,j=0;
    while(i < n){
        while(j<=i){
            cout<<"* ";
            j++;
        }
        j=0;
        i++;
        cout<<endl;
    }
}
 int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    pyd(n);
    return 0;
}