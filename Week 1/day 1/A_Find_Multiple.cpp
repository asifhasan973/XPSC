#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a%c==0) cout<<a;
    else{
        int k = a/c;
        int ans = (k+1)*c;
        if(ans>=a && ans<=b) cout<<ans;
        else cout<<-1;
    }
       
    return 0;
}