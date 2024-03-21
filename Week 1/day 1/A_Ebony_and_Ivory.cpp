#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,flag = 0;
    cin>>a>>b>>c;
    int m = c/a+1;
    int n = c/b+1;
    for (int i = 0; i < m; i++)
    {
        
        for (int j = 0; j < n; j++)
        {
            if(a*i+b*j == c){
                flag = 1;
            }
            
        }
        if(flag==1) break;
        
    }
    if(flag) cout<<"Yes";
    else cout<<"No";
    
       
    return 0;
}