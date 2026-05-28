/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-05-28 14:20:53 
 * @Last Modified by:   08250117_Sawakage 
 * @Last Modified time: 2026-05-28 14:20:53 
 */
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
    char a[2000],b[2000];
    scanf("%s\n%s", a, b);
    char *pos = strstr(a, b);
    pos == NULL ? printf("0\n") : printf("%d", (int)(pos - a) + 1);
    return 0;
}