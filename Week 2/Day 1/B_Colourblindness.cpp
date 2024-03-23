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
        int n,flag = 1;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        for (int i = 0; i < n; i++)
        {
            if((s1[i]=='R' && s2[i]!='R') || (s1[i]!='R' && s2[i]=='R')) flag = 0;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}
 