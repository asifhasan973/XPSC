#include<bits/stdc++.h>
 
#define int long long
#define endl '\n'

using namespace std;
 
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s1,s2;
    int c=0;
    cin>>s1>>s2;
    for (int i = 0; i < s1.size(); i++)
    {
        if(s1[i]!=s2[i]) c++;
    }
    cout<<c;
    
    return 0;
}
 