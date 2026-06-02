/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-06-02 11:17:52 
 * @Last Modified by: 08250117_Sawakage
 * @Last Modified time: 2026-06-02 11:19:41
 */
#include <cstdio>
#include <queue>
#include <cstring>
using namespace std;

struct Node{
    int x, y;
};

char mp[105][105];
int bfs[105][105];
int dx[4] ={-1, 1, 0, 0}, dy[4] ={0, 0, -1, 1};

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        int n, m;
        scanf("%d %d", &n, &m);
        int sx = -1, sy = -1, ex = -1, ey = -1;
        
        for(int i = 0; i < n; i++){
            scanf("%s", mp[i]);
            for(int j = 0; j < m; j++){
                if(mp[i][j] == 'S')
                    sx = i, sy = j;
                else if(mp[i][j] == 'E')    
                    ex = i, ey = j;
            }
        }
        
        memset(bfs, -1, sizeof(bfs));
        
        queue<Node> q;
        q.push(Node{sx, sy});
        bfs[sx][sy] = 0;
        
        while(!q.empty()){
            Node u = q.front();
            q.pop();
            for(int i = 0; i < 4; i++){
                int nx = u.x + dx[i], ny = u.y + dy[i];

                if(nx < 0 || nx >= n || ny < 0 || ny >= m || mp[nx][ny] == '#' || bfs[nx][ny] != -1)
                    continue;
                bfs[nx][ny] = bfs[u.x][u.y] + 1;
                q.push(Node{nx, ny});
            }
        }
        printf("%d\n", bfs[ex][ey]);
    }
    return 0;
}