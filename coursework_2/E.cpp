/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-06-02 11:12:22 
 * @Last Modified by: 08250117_Sawakage
 * @Last Modified time: 2026-06-02 11:13:33
 */
#include <cstdio>
#include <cstring>
using namespace std;
char in[30], post[30], side[5];

int main(){
    scanf("%s", in);
    scanf("%s", post);
    scanf("%s", side);
    int len =(int)strlen(in);
    char root = post[len - 1];
    int pos = 0;

    while(pos < len && in[pos] != root)
        pos++;

    if(side[0] == 'L'){
        for(int i = 0; i < pos; i++)
            putchar(post[i]);
    }
    else{
        for(int i = pos; i < len - 1; i++)
            putchar(post[i]);
    }
    return 0;
}