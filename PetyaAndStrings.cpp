#include<bits\stdc++.h>
using namespace std;
int main(){
    string str1;
    string str2;
    cin>>str1;
    cin>>str2;
    for(char &c : str1){
        c = tolower(static_cast<unsigned char>(c));
    }
    for(char &c : str2){
        c = tolower(static_cast<unsigned char>(c));
    }
    int n = str1.size();
    for(int i=0;i<n;i++){
        if(str1[i]-str2[i] == 0){
            if(i==n-1){
                cout<<0;
                return 0;
            }
        }
        else if(str1[i]-str2[i]>0){
            cout<<1;
            return 0;
        }
        else if(str1[i]-str2[i]<0){
            cout<<-1;
            return 0;
        }
    }

    return 0;
}