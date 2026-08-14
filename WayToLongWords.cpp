#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string word = "";
        cin>>word;
        int len = word.size();
        if(len<=10){
            cout<<word<<endl;
        }
        else{
            string n = to_string(len-2);
            string ans = "";
            ans = ans + word[0];
            ans = ans + n;
            ans = ans + word[len-1];
            cout<<ans<<endl;
        }

    }
    return 0;
}