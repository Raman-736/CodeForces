#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int totalSum = 0;
    for(int i=0;i<n;i++){
        totalSum += arr[i];
    }
    sort(arr.begin(),arr.end());
    int sum = 0;
    for(int i=n-1;i>=0;i--){
        sum += arr[i];
        if(sum > totalSum-sum){
            cout<<n-i;
            return 0;
        }
    }
    return 0;
}