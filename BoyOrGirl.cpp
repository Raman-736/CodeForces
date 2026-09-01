#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="";
    cin>>str;
    map<char, int>mpp;
    int n = str.size();
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(mpp.find(str[i]) == mpp.end()){
            cnt++;
        }
        mpp[str[i]] = i;
    }
    if(cnt%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }

    return 0;
}