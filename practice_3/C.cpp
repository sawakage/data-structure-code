/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-05-30 10:35:30 
 * @Last Modified by: 08250117_Sawakage
 * @Last Modified time: 2026-06-24 22:01:41
 */
#include <cstdio>
using namespace std;

const int MAXN = 35;

int n;
int pre[MAXN], after[MAXN];
int mid[MAXN], cnt;
bool flag;

void solve(int pl, int pr, int ql, int qr){
    if(pl > pr)
        return;
    if(pl == pr){
        mid[cnt++] = pre[pl];
        return;
    }

    int root = pre[pl], lr = pre[pl + 1], k = ql;
    
    while(k <= qr && after[k] != lr)
        k++;
    
    int ls = k - ql + 1, totalsize = pr - pl + 1;

    if(ls == totalsize - 1){
        flag = false;
        mid[cnt++] = root;
        solve(pl + 1, pr, ql, qr - 1);
    }
    else{
        solve(pl + 1, pl + ls, ql, k);
        mid[cnt++] = root;
        solve(pl + ls + 1, pr, k + 1, qr - 1);
    }
}

int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &pre[i]);
    for(int i = 0; i < n; i++)
        scanf("%d", &after[i]);

    cnt = 0;
    flag = 1;

    solve(0, n - 1, 0, n - 1);

    printf("%s\n", flag ? "Yes" : "No");
    for(int i = 0; i < cnt; i++){
        if(i)
            printf(" ");
        printf("%d", mid[i]);
    }
    return 0;
}