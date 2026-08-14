#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int x = 0;
    cin>>n;
    for(int i=0;i<n;i++){
        string statement;
        cin>>statement;
        if(statement == "X++" || statement == "++X"){
            x++;
        }
        else{
            x--;
        }
    }
    cout<<x<<endl;
    return 0;
}