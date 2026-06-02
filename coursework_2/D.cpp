/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-06-02 10:16:15 
 * @Last Modified by: 08250117_Sawakage
 * @Last Modified time: 2026-06-02 10:40:16
 */
#include <cstdio>
#include <cstring>

void solve(const char *pre, const char *in, int len){
    if(len <= 0)
        return;
    char root = pre[0];
    int pos = 0;
    while(pos < len && in[pos] != root)
        pos++;

    solve(pre + 1, in, pos);
    solve(pre + pos + 1, in + pos + 1, len - pos - 1);
    putchar(root);
}

int main(){
    char pre[110], in[110];
    while(scanf("%s %s", pre, in) == 2){
        int len =(int)strlen(pre);
        solve(pre, in, len);
        printf("\n");
    }
    return 0;
}
