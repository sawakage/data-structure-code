/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-05-30 10:35:07 
 * @Last Modified by:   08250117_Sawakage 
 * @Last Modified time: 2026-05-30 10:35:07 
 */
#include <cstdio>
#include <queue>
#include <vector>
using namespace std;
int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        priority_queue<long long, vector<long long>, greater<long long>> q;
        for(int i = 0; i < n; i++){
            long long x;
            scanf("%lld", &x);
            q.push(x);
        }
        long long ans = 0;
        while(q.size() > 1){
            long long a = q.top();
            q.pop();
            long long b = q.top();
            q.pop();
            long long s = a + b;
            ans += s;
            q.push(s);
        }
        printf("%lld\n", ans);
    }
    return 0;
}