#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>0){
        cout<<n<<endl;
    }
    else{
        string num = to_string(n);
        string n1 = num;
        n1.pop_back();

        string n2 = num;
        n2.erase(num.size()-2, 1);

        int a = stoi(n1);
        int b = stoi(n2);
        int c = max(a, b);
        cout<<max(n, c)<<endl;

    }
}