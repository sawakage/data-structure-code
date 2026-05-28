/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-05-28 14:20:47 
 * @Last Modified by:   08250117_Sawakage 
 * @Last Modified time: 2026-05-28 14:20:47 
 */
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
    char a[200];
    while(scanf("%s", a) == 1){
        printf("%d\n", strlen(a)*(strlen(a) + 1) / 2 + 1);
    }
    return 0;
}