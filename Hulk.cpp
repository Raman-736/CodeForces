#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string ans = "";
    for(int i=1;i<=n;i++){
        if(i%2==1){
            ans = ans + "I hate";
        }
        else{
            ans = ans + "I love";
        }
        if(i==n) break;
        ans = ans + " that ";
    }
    ans = ans + " it";
    cout<<ans<<endl;
    return 0;
}