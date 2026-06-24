/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-06-24 21:36:08 
 * @Last Modified by: 08250117_Sawakage
 * @Last Modified time: 2026-06-24 21:57:31
 */
#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;

int getsum(int x){
    int sum = 0;
    while(x > 0){
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main(){
    int n;
    scanf("%d", &n);
    priority_queue<pair<int, int>> q;
    for (int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        int s = getsum(x);
        q.push({s, x});
    }
    printf("%d", q.top().second);
    q.pop();
    while(!q.empty()){
        printf(" %d", q.top().second);
        q.pop();
    }
    printf("\n");
    return 0;
}