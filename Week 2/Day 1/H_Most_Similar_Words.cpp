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
        int n, s_sz;
        cin>>n>>s_sz;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int flag = INT_MAX;
        
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                string s1,s2;
                s1 = v[i];
                s2 = v[j];
                
                int ans =0;

                for (int i = 0; i < s1.size(); i++)
                {
                    ans+=max(s1[i],s2[i])-min(s1[i],s2[i]);
                }
                if(ans<flag) flag = ans;
            }
            
        }
        


        
        

        cout<<flag<<endl;
    }
    

    
    return 0;
}
 