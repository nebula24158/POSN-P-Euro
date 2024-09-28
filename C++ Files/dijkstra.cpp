#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(NULL)->sync_with_stdio(0);
    vector<vector<pair<int,int>>> adj(1000);
    int n,startNode,finalNode = INT_MIN;
    cin >> n >> startNode;
    for (int i = 0; i < n; i++)
    {
        int source,destination,weight;
        cin >> source >> destination >> weight;
        adj[source].push_back({weight,destination});
        adj[destination].push_back({weight,source});
        if (source > finalNode)
        {
            finalNode = source;
        }
        if (destination > finalNode)
        {
            finalNode = destination;
        }
        
    }
    vector<int> root(finalNode+1);
    root[startNode] = startNode;
    vector<pair<int,int> root(finalNode+1);
    vector<pair<int,pair<int,int>>> determine;
    vector<int> visited;
    visited.push_back(startNode);
    int curNode = startNode;
    while (visited.size() < finalNode+1)
    {
        for(auto i : adj[curNode]){
            determine.push_back({i.second,{curNode,i.first}});
        }
        sort(determine.begin(),determine.end(),greater<pair<int,pair<int, int>>>()); 
        
        while (find(visited.begin(),visited.end(),determine.back().second.second) != visited.end())
        {
            determine.pop_back();   
        }
            visited.push_back(determine.back().second.second);
            root[determine.back().second.second] = determine.back().second.first;
    }
    
}