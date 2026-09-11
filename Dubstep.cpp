#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    string ans = "";
    for(int i=0;i<str.size();i++){
        if(i+2< str.size() && str[i]=='W' && str[i+1]=='U' && str[i+2]=='B'){
            if(ans != "" && ans.back() != ' '){
                ans += " ";
            }
            i += 2;
        }
        else{
            ans += str[i];
        }
    }
    if(!ans.empty() && ans.back()==' '){
        ans.pop_back();
    }
    cout<<ans;
    return 0;
}