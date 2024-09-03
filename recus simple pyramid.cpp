#include<bits/stdc++.h>
using namespace std;

void print(int n){
    if(n==0) return;
    else{
        cout<<"* ";
        print(n-1);
    }

}

void pattern(int n){
    if(n==0) return;
    else{
        pattern(n-1);
        cout<<endl;
        print(n);
    }
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    pattern(n);
    return 0;
}
