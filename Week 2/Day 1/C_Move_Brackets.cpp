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
        int n,c=0;
        cin>>n;
        string s;
        cin>>s;
        int total= 0;
       
        
         int sz= s.size();
        for (int i = 0; i < sz; i++)
        {
            
            if(s[i]=='(') total++;
            else if(s[i]==')') total--;
            if(total<0){
                s.push_back(')');
                sz++;
                total = 0;
                c++;
            }
        }
        cout<<c<<endl;
    }
    
    return 0;
}
 