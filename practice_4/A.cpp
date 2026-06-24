/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-06-24 20:08:40 
 * @Last Modified by: 08250117_Sawakage
 * @Last Modified time: 2026-06-24 20:30:10
 */
#include <cstdio>
#include <map>
#include <string>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    map<string, pair<string, int>> mp;
    char u[101], v[101];
    int w;
    for (int i = 0; i < (1 << (1 + n)) - 2;i++){
        scanf("%s %s %d", u, v, &w);
        mp[string(v)] = {string(u), w};
    }
    char q[101];
    scanf("%s", q);
    string q_s = string(q);
    long long ans = 0;
    while(mp.find(q_s) !=mp.end()){
        ans += mp[q_s].second;
        q_s = mp[q_s].first;
    }
    printf("%lld", ans);
    return 0;
}