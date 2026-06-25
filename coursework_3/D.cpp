/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-06-25 10:50:58 
 * @Last Modified by: 08250117_Sawakage
 * @Last Modified time: 2026-06-25 10:52:58
 */
#include <cstdio>
#include <algorithm>
using namespace std;
int n, a[200];
int main(){
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}