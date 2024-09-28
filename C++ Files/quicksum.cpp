#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL)->sync_with_stdio(0);
    int n;
    int mx = INT_MIN,mxin,mn = INT_MAX,mnin;
    cin >> n;
    int arr[n];
    int prefixsum[n+2] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        prefixsum[i+1] = arr[i] + prefixsum[i];
        if (prefixsum[i+1] > mx)
        {
            mx = prefixsum[i+1];
            mxin = i;
        }
    }
    for (int i = 0; i < mxin; i++)
    {
        if (prefixsum[i+1] < mn)
        {
            mn = prefixsum[i+1];
            mnin = i;
        }
        
    }

    if (mx - mn <= 0 )
    {
        cout << "Empty sequence";
    }else
    {
        for (int i = mnin+1; i <= mxin; i++)
        {
            cout << arr[i] << " ";
        }
        cout << '\n' << mx-mn;
        
    }
    
    
}