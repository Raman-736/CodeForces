#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, h;
    cin>>n>>h;
    vector<int> f(n);
    for(int i=0;i<n;i++){
        cin>>f[i];
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        if(f[i]>h) ans = ans + 2;
        else ans++;
    }
    cout<<ans<<endl;
    return 0;
}