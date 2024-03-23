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
        int n;
        cin>>n;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        if((n-s.size())%2==1) cout<<s.size()-1;
        else cout<<s.size();
        cout<<endl;
    }
    

    
    return 0;
}
 