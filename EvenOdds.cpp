#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, k;
    cin>>n>>k;

    long long odds = (n+1)/2;
    if(k<=odds){
        cout<<2*k-1;
    }
    else{
        k = k - odds;
        cout<<2*k;
    }
    return 0;
}