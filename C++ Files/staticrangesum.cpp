#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q,r,l,j,temp;
    vector<int> a,ans,prefix = {0};
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        
        cin >> j;
        prefix.push_back(j + prefix.back());
    }
    for (int i = 0; i < q; i++)
    {
       
        cin >> l >> r;
       ans.push_back(prefix[r-1] - prefix[l]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    
}