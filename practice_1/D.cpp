/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-05-28 14:20:31 
 * @Last Modified by:   08250117_Sawakage 
 * @Last Modified time: 2026-05-28 14:20:31 
 */
#include <cstdio>
#include <stack>
using namespace std;
int main(){
    long long n;
    int r;
    scanf("%lld %d", &n, &r);
    char table[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    stack<char> st;
    if(n == 0){
        printf("0\n");
        return 0;
    }
    while(n > 0){
        int x = n % r;
        st.push(table[x]);
        n /= r;
    }
    while(!st.empty()){
        printf("%c", st.top());
        st.pop();
    }
    return 0;
}