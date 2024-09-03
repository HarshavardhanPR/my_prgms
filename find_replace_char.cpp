#include<bits/stdc++.h>
using namespace std;

void finds(string g){
    int temp;
    int n=g.length();
    for(int i=0;i<n;i++){
    temp=g[g.find('l',0)];
    g[g.find('l',0)]=g[g.find('H',0)];
    g[g.find('H',0)]=temp;
    }
    cout<<g;

}

void f1(string g){
    g.at(g.find('l',0))='H';
    g.at(g.find('H',0))='l';
    cout<<g;
}
int main(){
    string g="Hellos";
    f1(g);
    return 0;
}