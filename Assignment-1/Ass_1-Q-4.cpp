#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>ari = {100,300,500}, dep = {900,400,600};
    int n = ari.size(), ans=1;
    
    vector<pair<int,int>>vp;
    
    for(int i=0 ; i<n ; i++){
        vp.push_back({ari[i],dep[i]});
    }
    
    sort(vp.begin(),vp.end());
    
    for(int i=0 ; i<n-1 ; i++){
        if(vp[i].second>vp[i+1].first)ans++;
    }
    
    cout<<ans<<"\n";

    return 0;
}