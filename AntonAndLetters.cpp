#include<bits/stdc++.h>
using namespace std;
int main(){
    map<char, int>mp;
    string s;
    getline(cin, s);
    int cnt=0;
    if(s.size()==2){
        cout<<0<<endl;
        return 0;
    }
    for(int i=1;i<s.size();i=i+3){
        if(mp[s[i]]==0) cnt++;
        mp[s[i]]++;
        if(s[i+1]=='}') break;
    }
    cout<<cnt<<endl;
    return 0;
}