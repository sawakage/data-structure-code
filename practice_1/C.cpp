/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-05-28 14:20:28 
 * @Last Modified by:   08250117_Sawakage 
 * @Last Modified time: 2026-05-28 14:20:28 
 */
#include <cstdio>
using namespace std;
int main(){
    long long n, m, ans = 0;
    scanf("%d%d", &n, &m);
    for (long long i = 2; i <= n; i++)
        ans = (ans + m) % i;
    printf("%d", ans + 1);
    return 0;
}