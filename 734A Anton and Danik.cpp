#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    string s;
    cin>>n;
    getchar();
    getline(cin,s);

    int a=0,d=0,i;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='A'){a++;}
        if(s[i]=='D'){d++;}
    }
    if(a>d){cout<<"Anton"<<endl;}
    else if(a<d){cout<<"Danik"<<endl;}
    else {cout<<"Friendship"<<endl;}




return 0;
}


