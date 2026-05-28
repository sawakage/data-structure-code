/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-05-28 14:21:39 
 * @Last Modified by:   08250117_Sawakage 
 * @Last Modified time: 2026-05-28 14:21:39 
 */
#include <cstdio>
using namespace std;
int a[505][505];
int main(){
    int n;
    scanf("%d", &n);
 
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0}, x = 0, y = 0, dir = 0;
 
    for(int num = 1; num <= n * n; num++){
        a[x][y] = num;
        int nx = x + dx[dir], ny = y + dy[dir];
        if(nx < 0 || nx >= n || ny < 0 || ny >= n || a[nx][ny] != 0)
            dir = (dir + 1) % 4, nx = x + dx[dir], ny = y + dy[dir];
        x = nx, y = ny;
    }
 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j)
                printf(" ");
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}