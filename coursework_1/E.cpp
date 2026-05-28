/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-05-28 14:27:15 
 * @Last Modified by:   08250117_Sawakage 
 * @Last Modified time: 2026-05-28 14:27:15 
 */
#include <cstdio>
#include <vector>
using namespace std;
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    vector<int> a;
    for (int i = 1; i <= n; i++)
        a.push_back(i);
    int pos = 0, first = 1;
    while (!a.empty()){
        pos = (pos + m - 1) % a.size();
        if (!first)
            printf(" ");
        printf("%d", a[pos]);
        first = 0;
        a.erase(a.begin() + pos);
    }
    return 0;
}