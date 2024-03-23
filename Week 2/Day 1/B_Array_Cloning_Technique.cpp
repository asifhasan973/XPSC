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
        vector <int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        unordered_map <int,int> mp;
        for(int k: v){
            mp[k]++;
        }
        int max_occ = -1;
        for(auto p: mp){
            max_occ = max(max_occ, p.second);
        }
        if(max_occ ==n){
            cout<<0<<endl;
        }
        else if(max_occ==1){
            
            int remain = n-max_occ-1,ans=2;
            max_occ++;
            int loop=remain/max_occ;
            while (loop--)
            {
                remain -= max_occ;
                max_occ+=max_occ;
                ans+=(max_occ+1);
                
            }
            if(remain==0) cout<<ans<<endl;
            else{
                ans+=(remain+1);
                cout<<ans<<endl;

            }
            
        }
        else{
            int remain = n-max_occ,ans=0;
            int loop=remain/max_occ;
            while (loop--)
            {
                remain -= max_occ;
                max_occ+=max_occ;
                ans+=(max_occ+1);
                
            }
            if(remain==0) cout<<ans<<endl;
            else{
                ans+=(remain+1);
                cout<<ans<<endl;

            }
            
        }
    }
    
    
    return 0;
}
 