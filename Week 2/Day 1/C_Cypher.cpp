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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        
       
        for (int i = 0; i < n; i++)
        {
            int s_size;
            cin>>s_size;
            string s;
            cin>>s;
            for (int j = 0; j < s_size; j++)

            {
                if(s[j]=='U'){
                    if(v[i]==0){
                        v[i]=9;
                        
                    }
                    else{
                        v[i]--;
                    }
                }
                else{
                    if(v[i]==9){
                        v[i]=0;
                        
                    }
                    else{
                        v[i]++;
                    }

                }
            }
            
        }
        for(int z: v) cout<<z<<" ";
        cout<<endl;
    }
    
    
    return 0;
}
 