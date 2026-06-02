/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-06-02 14:11:06 
 * @Last Modified by: 08250117_Sawakage
 * @Last Modified time: 2026-06-02 14:14:43
 */
#include <cstdio>
using namespace std;

int main(){
    int T, n;
    scanf("%d", &T);
    while(T--){
        scanf("%d", &n);
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(j > 1)
                    printf(" ");
                printf("%d", i * j);
            }
            printf("\n");
        }
    }
    return 0;
}