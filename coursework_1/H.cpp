/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-05-28 14:28:07 
 * @Last Modified by:   08250117_Sawakage 
 * @Last Modified time: 2026-05-28 14:28:07 
 */
#include <cstdio>
#include <stack>
using namespace std;
int main(){
    int T;
    scanf("%d", &T);
    getchar();
    char s[1005];
 
    while(T--){
        fgets(s, sizeof(s), stdin);
        stack<char> st;
         
        for(int i = 0; ; i++){
            if(s[i] == ' ' || s[i] == '\n' || s[i] == '\r' || s[i] == '\0'){
                while(!st.empty())
                    printf("%c", st.top()), st.pop();
                if(s[i] == ' ')
                    putchar(' ');
                else
                    break;
            }
            else
                st.push(s[i]);
        }
        printf("\n");
    }
    return 0;
}