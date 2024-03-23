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
        int n,k,l, flag = 1;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        for (int i = 0; i < n/2; i++)
        {
            if(v[i]!=v[n-i-1]){
                k = v[i];
                l = v[n-i-1];
                flag =0;
                
               
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            vector <int> v2,v3,tm1,tm2;
            v2 = v;
            v3= v;
            v2.erase(remove(v2.begin(), v2.end(), k), v2.end());
            tm1=v2;
            reverse(v2.begin(), v2.end());
            if(v2==tm1){
                cout<<"YES"<<endl;
            }
            else{
                v3.erase(remove(v3.begin(), v3.end(), l), v3.end());
                tm2 = v3;
                reverse(v3.begin(), v3.end());
                if(v3==tm2){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }

        }
    }
    
    
    
    return 0;
}
 