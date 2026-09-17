#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> f(n);
        for(int i=0;i<n;i++){
            cin>>f[i];
        }
        sort(f.begin(), f.end());

        int maxi = 1;
        int cnt = 1;

        for (int i = 1; i < n; i++) {
            if (f[i] - f[i - 1] <= k) {
                cnt++;
            } else {
                cnt = 1;
            }

            maxi = max(maxi, cnt);
        }

        cout << n - maxi << endl;

    }
    return 0;
}