/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-05-28 14:27:52 
 * @Last Modified by:   08250117_Sawakage 
 * @Last Modified time: 2026-05-28 14:27:52 
 */
#include <cstdio>
#include <cstring>
#include <stack>
using namespace std;
 
int priority(char op){
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}
bool isnum(char c){
    return c >= '0' && c <= '9';
}
 
bool first = 1;
int main(){
    char s[1005];
    scanf("%s", s);
    stack<char> st;
    int n = strlen(s);
 
    for (int i = 0; i < n; i++){
        if (isnum(s[i])){
            if (!first)
                printf(" ");
            while (i < n && isnum(s[i])){
                printf("%c", s[i]);
                i++;
            }
            first = 0, i--;
        }
        else if (s[i] == '('){
            st.push(s[i]);
        }
        else if (s[i] == ')'){
            while (!st.empty() && st.top() != '('){
                    if (!first)
                        printf(" ");
                    printf("%c", st.top());
                    first = 0, st.pop();
            }
            if (!st.empty())
                st.pop();
        }
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            while (!st.empty() && st.top() != '(' && priority(st.top()) >= priority(s[i])){
                if (!first)
                    printf(" ");
                printf("%c", st.top());
                first = 0, st.pop();
            }
            st.push(s[i]);
        }
    }
 
    while (!st.empty()){
        if (!first)
            printf(" ");
        printf("%c", st.top());
        first = 0, st.pop();
    }
    return 0;
}