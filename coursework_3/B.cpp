/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-06-25 10:42:00 
 * @Last Modified by:   08250117_Sawakage 
 * @Last Modified time: 2026-06-25 10:42:00 
 */
#include <cstdio>
#include <algorithm>
using namespace std;
int vec[5000], n;
void change(int u){
    while(2 * u + 1 < n){
        int c = 2 * u + 1;
        if(c + 1 < n && vec[c + 1] < vec[c])
            c++;
        if(vec[u] <= vec[c])
            break;
        swap(vec[u], vec[c]);
        u = c;
    }
}

int main(){
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &vec[i]);
    }
    for (int i = n / 2 + 1; i >= 0; i--){
        change(i);
    }
    for (int i = 0; i < n; i++){
        printf("%d ", vec[i]);
    }
    return 0;
}