#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string stones="";
    for(int i=0;i<n;i++){
        char ch ;
        cin>>ch;
        stones.push_back(ch);
    }
    int cnt=0;
    for(int i=0;i<=n-1;i++){
        if(stones[i] == stones[i+1]) cnt++;
    }
    cout<<cnt;
    return 0;
}