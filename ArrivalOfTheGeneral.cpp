#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> q(n);
    for(int i=0;i<n;i++){
        cin>>q[i];
    }
    int maxi = *max_element(q.begin(), q.end());
    int mini = *min_element(q.begin(), q.end());
    int cnt = 0;
    int maxIndex, minIndex;
    for(int i=0;i<n;i++){
        if(q[i]==maxi){
            maxIndex = i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(q[i]==mini){
            minIndex = i;
            break;
        }
    }
    if(maxIndex < minIndex){
        cout<<(maxIndex-0)+((n-1)-minIndex);
        return 0;
    }
    else {
        cout<<(maxIndex-0)+((n-1)-(minIndex+1));
        return 0;
    }
    return 0;
}