#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> v1(n), v2(n), v3(n);
        unordered_map <string,int> mp1,mp2,mp3;
        for (int i = 0; i < n; i++)
        {
            cin>>v1[i];
            mp1[v1[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin>>v2[i];
            mp2[v2[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin>>v3[i];
            mp3[v3[i]]++;
        }

        int pt1=0,pt2=0,pt3=0;

        for (int i = 0; i < n; i++)
        {
            
            if(mp2[v1[i]]==0 && mp3[v1[i]]==0){
                pt1+=3;
            }
            else if(mp2[v1[i]]==0 || mp3[v1[i]]==0){
                pt1+=1;
            }
            else{
                pt1+=0;
            }
        }
        cout<<pt1<<" ";

        for (int i = 0; i < n; i++)
        {
            if(mp1[v2[i]]==0 && mp3[v2[i]]==0){
                pt2+=3;
            }
            else if(mp1[v2[i]]==0 || mp3[v2[i]]==0){
                pt2+=1;
            }
            else{
                pt2+=0;
            }
        }
        cout<<pt2<<" ";

        for (int i = 0; i < n; i++)
        {
            if(mp1[v3[i]]==0 && mp2[v3[i]]==0){
                pt3+=3;
            }
            else if(mp1[v3[i]]==0 || mp2[v3[i]]==0){
                pt3+=1;
            }
            else{
                pt3+=0;
            }
        }
        cout<<pt3<<endl;
    }
    
    
    
       
    return 0;
}