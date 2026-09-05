#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.size();
    vector<int> nums;
    for(int i=0;i<n;i=i+2){
        int num = s[i]-'0';
        nums.push_back(num);
    }
    sort(nums.begin(), nums.end());

    for(int i=0, j=0;i<n;i=i+2, j++){
        s[i] = nums[j] + '0';
    }

    cout<<s;

    return 0;
}