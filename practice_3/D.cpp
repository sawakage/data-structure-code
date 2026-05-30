/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-05-30 11:03:13 
 * @Last Modified by:   08250117_Sawakage 
 * @Last Modified time: 2026-05-30 11:03:13 
 */
#include <cstdio>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
const int MAXN = 105;
const int MAXM = 1e4 + 10;
const int INF = 0x3f3f3f3f;

struct Edge{
    int to, w, next;
} e[MAXM];

int head[MAXN], cnt, dist[MAXN];
bool vis[MAXN];
int n, m;

void add(int u, int v, int w){
    e[cnt].to = v;
    e[cnt].w = w;
    e[cnt].next = head[u];
    head[u] = cnt++;
}

void djst(int s){
    priority_queue < pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    memset(dist, 0x3f, sizeof(dist));
    dist[s] = 0;
    q.push(make_pair(0, s));
    while(!q.empty()){
        int u = q.top().second;
        q.pop();
        if(vis[u])
            continue;
        vis[u] = 1;
        for (int i = head[u]; i != -1; i = e[i].next){
            int v = e[i].to, w = e[i].w;
            if(dist[v] > dist[u] + w){
                dist[v] = dist[u] + w;
                q.push(make_pair(dist[v], v));
            }
        }
    }
}

int main(){
    memset(head, -1, sizeof(head));
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i++){
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        add(x, y, z);

    }
    int a, b;
    scanf("%d%d", &a, &b);
    djst(a);
    if(dist[b] == INF)
        printf("STOP");
    else
        printf("%d", dist[b]);
    return 0;
}