// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    cout<<"you are "<<age<<" years old"<<endl;
    double age1;
    cout<<"Enter age1 : ";
    cin>>age1;
    cout<<"Age1 is "<<age1<<endl;
    string name;
    cout<<"Enter your name : ";
    getline(cin,name);
    cout<<"Hello "<<name;
    string address;
    cout<<"Enter your address : ";
    getline(cin,address);
    cout<<"\nyou stay at "<<address;
    return 0;
}