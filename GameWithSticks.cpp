#include<bits/stdc++.h>
using namespace std;
int main(){
    int m, n;
    cin>>m>>n;
    int x = min(m,n);
    // for(int i=0;i<x;i++){
    //     if(m==0 || n==0) break;
    //     m--;
    //     n--;
    //     cnt++;
    // }
    if(x%2==0){
        cout<<"Malvika"<<endl;
    }
    else{
        cout<<"Akshat"<<endl;
    }
    return 0;
}