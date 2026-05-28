/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-05-28 14:27:31 
 * @Last Modified by:   08250117_Sawakage 
 * @Last Modified time: 2026-05-28 14:27:31 
 */
#include <cstdio>
#include <stack>
using namespace std;
int check(char a){
    return (a == '{' || a == '[' || a == '(') ? 0 : ((a == '}' || a == ']' || a == ')') ? 1 : 2);
}
int category(char x){
    return (x == '(' || x == ')') ? 1 : ((x == '[' || x == ']') ? 2 : 3);
}
stack<char> st;
int main(){
    char in[105];
    bool flag = 1;
    scanf("%s", in);
    for (int i = 0; in[i] != '\0'; i++){
        if(check(in[i]) == 2)
            continue;
        else if(check(in[i]) == 0)
            st.push(in[i]);
        else{
            if(st.empty()){
                printf("NO%d", category(in[i]));
                flag = 0;
                return 0;
            }
            else if(category(in[i]) == category(st.top()))
                st.pop();
            else{
                flag = 0;
                printf("NO%d", category(st.top()));
                return 0;
            }
        }
    }
    if(!st.empty()){
        flag = 0;
        printf("NO%d", category(st.top()));
    }
    if(flag)
        printf("YES");
    return 0;
}