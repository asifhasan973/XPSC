#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    int m,n,p;
    cin>>a>>b;
    m= a*2-1;
    n= b*2-1;
    p = a+b;
    cout<<max(m,max(n,p));
       
    return 0;
}