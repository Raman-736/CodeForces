#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string st="";
    for(int i=0;i<n;i++){
        st += tolower(s[i]);
    }
    map<char, int>mp;
    for(int i=0;i<n;i++){
        mp[st[i]]++;
    }
    for(char ch='a';ch<='z';ch++){
        if(mp[ch]==0){
            cout<<"NO"<<endl;;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}