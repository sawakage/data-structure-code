/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-06-24 20:30:21 
 * @Last Modified by: 08250117_Sawakage
 * @Last Modified time: 2026-06-24 20:51:55
 */
#include <cstdio>
#include <algorithm>
#include <cstring>

const int INF = 0x3f3f3f3f;
int vec[105][105];
int dist[105];
bool vis[105];
using namespace std;

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    int u, v, w;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if(i != j){
                vec[i][j] = INF;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d%d%d", &u, &v, &w);
        if (w < vec[u][v])
        {
            vec[u][v] = w;
        }
    }
    int q;
    scanf("%d", &q);
    for (int i = 1; i <= n; i++){
        dist[i] = vec[1][i];
    }
    vis[1] = 1;
    for (int i = 1; i <= n; i++){
        int min_ans = INF;
        int u = -1;
        for (int j = 1; j <= n; j++){
            if(!vis[j] && dist[j] < min_ans){
                min_ans = dist[j];
                u = j;
            }
        }
        if(u == -1){
            break;
        }
        vis[u] = 1;
        for (int v = 1; v <= n; v++){
            if(!vis[v] && vec[u][v] != INF){
                if(dist[u] + vec[u][v] < dist[v]){
                    dist[v] = dist[u] + vec[u][v];
                }
            }
        }
    }
    printf("%d", dist[q]);
    return 0;
}