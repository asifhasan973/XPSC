#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,flag=0;
    cin>>n;
    vector<int> v(n);
    long long sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if(sum%2==0){
            cout<<sum;
            
            return 0;
        }
        else{

            if(v[i]%2!=0){
                sum-=v[i];
            }
            if(i==n-1){
                flag=1;
                cout<<sum;
            }
            
        }
    }
    if(flag==0) cout<<0;
    
    
       
    return 0;
}