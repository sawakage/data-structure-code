/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-05-28 14:27:00 
 * @Last Modified by:   08250117_Sawakage 
 * @Last Modified time: 2026-05-28 14:27:00 
 */
#include <cstdio>
using namespace std;
int main(){
    int x, mx, cnt = 1;
    scanf("%d", &mx);
    while (scanf("%d", &x) == 1){
        if (x > mx)
            mx = x, cnt = 1;
        else if(x == mx)
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}