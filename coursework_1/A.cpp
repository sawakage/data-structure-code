/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-05-28 14:26:06 
 * @Last Modified by:   08250117_Sawakage 
 * @Last Modified time: 2026-05-28 14:26:06 
 */
#include <cstdio>
#include <string>
#include <unordered_map>
using namespace std;
unordered_map<string, int> mp;
int main() {
    int n;
    scanf("%d", &n);
    char id[10];
    int score;
    for (int i = 0; i < n; i++) {
        scanf("%s %d", id, &score);
        mp[id] = score;
    }
    char check[10];
    scanf("%s", check);
    printf("%d", mp[check]);
    return 0;
}