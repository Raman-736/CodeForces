#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    string magnet = "";
    string poles;
    for(int i=0;i<n;i++){
        cin>>poles;
        magnet = magnet + poles;
    }
    int m = magnet.size();
    int cnt = 1;
    for(int i=0;i<m-1;i++){
        if(magnet[i]==magnet[i+1]) cnt++;
    }
    cout<<cnt;
    return 0;
}