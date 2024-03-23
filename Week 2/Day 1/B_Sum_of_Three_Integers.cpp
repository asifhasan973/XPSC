#include<bits/stdc++.h>
 
#define int long long
#define endl '\n'

using namespace std;
 
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int k,n,c=0;
    cin>>k>>n;
    for (int i = 0; i <= k; i++)
    {
        if(i>n) break;
        for (int j = 0; j <= k; j++)
        {
            if(j>n) break;
            int l  = n-i-j;
            if(l>=0 && k>=l) c++;
           
            
        }
        
    }
    cout<<c;
    
    return 0;
}
 