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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        vector <int> v(26);
        for (int i = 0; i < n; i++)
        {
            v[s[i]-'a']++;
        }
       for (int i = 0; i < 26; i++)
       {
        if(v[i]%2==1)  k--;
       }
    
       if(k>=0){
            cout<<"YES"<<endl;
       }
       else{
           
            if(k==-1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
       }
       
        
    }
    
    return 0;
}
 