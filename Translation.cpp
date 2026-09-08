#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin>>s;
    cin>>t;
    int n = s.size();
    int m = t.size();
    if(m!=n){
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<n;i++){
        if(s[i] != t[n-i-1]) {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}