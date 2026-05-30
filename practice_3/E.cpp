/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-05-30 10:35:22 
 * @Last Modified by:   08250117_Sawakage 
 * @Last Modified time: 2026-05-30 10:35:22 
 */
#include <cstdio>
#include <algorithm>
using namespace std;

const int MAXN = 55;
const int MAXM = 4000;

struct Edge{
    int u, v, w;
}e[MAXM];

int fa[MAXN], n, m;

bool cmp(const Edge &a, const Edge &b){
    return a.w < b.w;
}
int find(int x){
    if(fa[x] == x)
        return x;
    return
        fa[x] = find(fa[x]);
}

int main(){
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int w;
            scanf("%d", &w);
            if(j > i && w != 0){
                e[m].u = i;
                e[m].v = j;
                e[m].w = w;
                m++;
            }
        }
    }
    sort(e, e + m, cmp);
    for(int i = 1; i <= n; i++)
        fa[i] = i;
    int ans = 0, cnt = 0;
    for(int i = 0; i < m; i++){
        int fu = find(e[i].u), fv = find(e[i].v);
        if(fu != fv){
            fa[fu] = fv;
            ans += e[i].w, cnt++;
            if(cnt == n - 1)
                break;
        }
    }
    printf("%d", ans);
    return 0;
}