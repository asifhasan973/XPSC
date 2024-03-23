#include<bits/stdc++.h>
 
#define int long long
#define endl '\n'

using namespace std;
 
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b;
    cin>>a>>b;
    for (int i = 0; i < a; i++)
    {
        int p;
        cin>>p;
        if(p!=b) cout<<p<<" ";
    }
    
    
    return 0;
}
 