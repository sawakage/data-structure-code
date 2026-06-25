/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-06-25 10:42:04 
 * @Last Modified by:   08250117_Sawakage 
 * @Last Modified time: 2026-06-25 10:42:04 
 */
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> vec[500];
bool vis[500];

void dfs(int u){
    printf("%d ", u);
    vis[u] = 1;
    for(int v : vec[u]){
        if(!vis[v])
            dfs(v);
    }
}
int main(){
    int m, n;
    scanf("%d%d", &m, &n);
    for(int i = 0; i < n; i++){
        int u, v;
        scanf("%d%d", &u, &v);
        vec[u].push_back(v);
        vec[v].push_back(u);
    }
    for (int i = 0; i < m; i++){
        sort(vec[i].begin(), vec[i].end());
    }
    dfs(0);
    return 0;
}