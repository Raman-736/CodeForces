#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    vector<int> f(n);
    for(int i=0;i<n;i++){
        cin>>f[i];
    }
    int cnt = 0;
    int amt = 0;
    sort(f.begin(), f.end());
    for(int i=0;i<n;i++){
        if(f[i]<0){
            amt = amt + abs(f[i]);
            cnt++;
            if(cnt == m) break;
        }
    }
    cout<<amt<<endl;
    return 0;
}