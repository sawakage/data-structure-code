/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-05-28 14:21:21 
 * @Last Modified by:   08250117_Sawakage 
 * @Last Modified time: 2026-05-28 14:21:21 
 */
#include <cstdio>
using namespace std;
int main(){
    int n, a, ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            scanf("%d", &a);
            if(i == j)
                ans += a;
        }
    }
    printf("%d", ans);
    return 0;
}