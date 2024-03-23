#include<bits/stdc++.h>
 
#define int long long
#define endl '\n'

using namespace std;
 
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s;
        cin>>s;
        sort(s.begin(), s.end());
        string s2 = "Timur";
        sort(s2.begin(), s2.end());
        
        if(s==s2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    
    return 0;
}