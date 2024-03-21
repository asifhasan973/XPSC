#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,k=0;
    cin>>a>>b;
    while(a<=b){
        a*=2;
        k++;
    }
    cout<<k;

       
    return 0;
}