#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x<=5) cout<<1;
    int cnt;
    if(x>5){
        while(true){
            int a = x%5;
            if(a==0){
                cout<<x/5;
                break;
            }
            else{
                x = x-a;
                cout<<x/5+1;
                break;
            }
        }
    }
    return 0;
}