/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-05-28 14:26:28 
 * @Last Modified by:   08250117_Sawakage 
 * @Last Modified time: 2026-05-28 14:26:28 
 */
#include <cstdio>
#include <vector>
using namespace std;
vector<int> a(2000);
vector<vector<int>> add(2000);
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++){
        int k, x;
        scanf("%d %d", &k, &x);
        if(k > n)
            k = n + 1;
        add[k].push_back(x);
    }
    bool first = 1;
    for (int i = 1; i <= n + 1; i++){
        for (int j = 0; j < (int)add[i].size(); j++){
            if (!first) printf(" ");
            printf("%d", add[i][j]);
            first = 0;
        }
        if (!first && i <= n) printf(" ");
         
        if (i <= n) printf("%d", a[i]);
        first = 0;
    }
    return 0;
}