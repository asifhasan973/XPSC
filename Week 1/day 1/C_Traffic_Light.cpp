#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c;
        string s, s_big;
        cin>>c>>s;
        s_big=s+s;
        int k = 0;
        vector <int> v(2*n);
        for (int i = n*2-1; i >= 0; i--)
        {
            if(s_big[i]=='g') k = i;
            else{
                v[i] = k;
            }

        }
        vector <int> ans;
        
        for (int i = 0; i < n; i++)
        {
            if(s[i]==c){
                
                ans.push_back(v[i]-i);
            }
        }
        
        auto it = max_element(ans.begin(), ans.end());
  
        if(*it<=0) cout<<0<<endl;
        else cout<< *it<<endl;
        
        
    }
    
    return 0;
}