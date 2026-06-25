/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-06-25 10:42:13 
 * @Last Modified by: 08250117_Sawakage
 * @Last Modified time: 2026-06-25 10:49:00
 */
#include <cstdio>
using namespace std;

int a[5000], n, x;
int main(){
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);

    int l = 0, r = n - 1, cnt = 0;
    while(l <= r){
        int mid = (l + r) >> 1;
        cnt++;
        if(a[mid] == x){
            printf("%d", cnt);
            return 0;
        }
        else if(a[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    printf("NO");
    return 0;
}