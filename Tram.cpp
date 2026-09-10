#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a, b;
    int ans = 0;
    int maxi = 0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        ans = ans - a;
        ans = ans + b;
        maxi = max(maxi, ans);
    }
    cout<<maxi;
    return 0;
}