/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-05-28 14:22:02 
 * @Last Modified by:   08250117_Sawakage 
 * @Last Modified time: 2026-05-28 14:22:02 
 */
#include <cstdio>
using namespace std;
long long step = 0;
void hnt(int n, char from, char mid, char to){
    if(n == 0)
        return;
    hnt(n - 1, from, to, mid);
    step++;
    printf("%lld %d %c->%c\n", step, n, from, to);
    hnt(n - 1, mid, from, to);
}
 
int main(){
    int n;
    scanf("%d", &n);
    hnt(n, 'A', 'B', 'C');
    return 0;
}