#include<bits/stdc++.h>
using namespace std;
int main(){
    int cnt = 1;
    string s;
    cin>>s;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            cnt++;
        }
        else{
            cnt = 1;
        }
        if(cnt>=7){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}