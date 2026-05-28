/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-05-28 14:22:22 
 * @Last Modified by:   08250117_Sawakage 
 * @Last Modified time: 2026-05-28 14:22:22 
 */
#include <cstdio>
#include <vector>
using namespace std;
 
vector<int> g[50];
bool flag[50], ischild[50];
 
void dfs(int u, bool &first){
    if (!first)
        printf(" ");
    printf("%c", u + 'A');
    first = 0;
 
    for(int v : g[u])
        dfs(v, first);
}
 
int main(){
    char fa, ch;
 
    while(scanf(" %c %c", &fa, &ch) == 2){
        int u = fa - 'A', v = ch - 'A';
        g[u].push_back(v);
        flag[u] = flag[v] = ischild[v] = 1;
    }
 
    int root = -1;
    for(int i = 0; i < 26; i++){
        if(flag[i] && !ischild[i]){
            root = i;
            break;
        }
    }
 
    bool first = 1;
    dfs(root, first);
    return 0;
}