#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> time;
    int n,x,j,sum = 0,ans;
    cin >> n >> x;
    for (int i = 0; i <  n; i++)
    {
        cin >> j;
        time.push_back(j);
    }
    sort(time.begin(),time.end());
    for (int i = 0; sum <= x; i++)
    {
        sum += time[i];
        ans = i;
    }
    cout << ans;
    
}