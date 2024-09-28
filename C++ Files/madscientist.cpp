#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans =0;
    string a,b;
    cin >> n >> a >> b;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {
            if (a[i+1] == b[i+1])
            {
                ans++;
            }
            
        }
        
        
    }
    cout << ans;
}