/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-05-28 14:20:40 
 * @Last Modified by:   08250117_Sawakage 
 * @Last Modified time: 2026-05-28 14:20:40 
 */
#include <cstdio>
using namespace std;
double solve(){
    char s[100];
    scanf("%s", s);
    if(s[1] == '\0' && (s[0] == '+' || s[0] == '-' || s[0] == '*' || s[0] == '/')){
        double a = solve();
        double b = solve();
        if (s[0] == '+') return a + b;
        if (s[0] == '-') return a - b;
        if (s[0] == '*') return a * b;
        return a / b;
    }
    double x;
    sscanf(s, "%lf", &x);
    return x;
}
 
int main(){
    printf("%.6f\n", solve());
    return 0;
}