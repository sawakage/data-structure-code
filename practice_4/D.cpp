/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-06-24 21:23:56 
 * @Last Modified by: 08250117_Sawakage
 * @Last Modified time: 2026-06-24 21:30:10
 */
#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
    int c;
    scanf("%d", &c);
    while(c--){
        int n;
        scanf("%d", &n);
        priority_queue<int, vector<int>, greater<int>> min_q;
        for (int i = 0; i < n; i++){
            int v;
            scanf("%d", &v);
            min_q.push(v);
        }
        int min_v = min_q.top();
        min_q.pop();
        bool flag = 0;
        while(!min_q.empty()){
            if(min_q.top() == min_v){
                min_q.pop();
            }
            else{
                flag = 1;
                min_v = min_q.top();
                break;
            }
        }
        flag ? printf("%d\n", min_v) : printf("NO\n");
    }
    return 0;
}