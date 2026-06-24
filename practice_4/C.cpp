/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-06-24 21:02:04 
 * @Last Modified by: 08250117_Sawakage
 * @Last Modified time: 2026-06-24 21:22:02
 */
#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

struct Edge{
    int to, w;
};

vector<Edge> vec[30];
int dis[30];
bool inq[30];

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i++){
        char u, v;
        int w;
        scanf(" %c %c %d", &u, &v, &w);
        vec[u - 'A'].push_back({v - 'A', w});
    }
    memset(dis, -1, sizeof(dis));
    queue<int> q;
    dis[0] = 0;
    q.push(0);
    inq[0] = 1;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        inq[u] = 0;
        for(auto edge : vec[u]){
            int v = edge.to, w = edge.w;
            if(dis[u] != -1 && dis[u] + w > dis[v]){
                dis[v] = dis[u] + w;
                if(!inq[v]){
                    q.push(v);
                    inq[v] = 1;
                }
            }
        }
    }
    printf("%d", dis['Z' - 'A']);
    return 0;
}