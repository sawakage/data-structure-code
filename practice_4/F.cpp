/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-06-24 22:05:29 
 * @Last Modified by: 08250117_Sawakage
 * @Last Modified time: 2026-06-24 22:11:05
 */
#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
    priority_queue<int> odd;
    priority_queue<int, vector<int>, greater<int>> even;
    for (int i = 0; i < 10; i++){
        int x;
        scanf("%d", &x);
        x % 2 ? odd.push(x) : even.push(x);
    }
    for (int i = 0; i < 5; i++){
        printf("%d ", odd.top());
        odd.pop();
    }
    for (int i = 0; i < 4; i++){
        printf("%d ", even.top());
        even.pop();
    }
    printf("%d", even.top());
    return 0;
}