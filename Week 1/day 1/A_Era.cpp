#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> v(n+1);
        for (int i = 1; i <= n; i++)
        {
            cin>>v[i];
        }

        long long ans = 0, k=1;
        
        for (int i = 1; i <= n; i++)
        {
            if(k < v[i]){
                
                ans+=(v[i]-k);
                k+=v[i]-k;
                k++;
            }
            else{
                k++;
            }
        }
        cout<<ans<<endl;
    }
    
    

    
       
    return 0;
}