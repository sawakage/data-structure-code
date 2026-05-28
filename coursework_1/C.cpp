/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-05-28 14:26:44 
 * @Last Modified by:   08250117_Sawakage 
 * @Last Modified time: 2026-05-28 14:26:44 
 */
#include <cstdio>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
void read(vector<int>& v){
    int x;
    char ch;
    while (scanf("%d%c", &x, &ch) == 2){
        v.push_back(x);
        if (ch == '\n') break;
    }
}
 
int main(){
    vector<int> a, b, c;
    read(a), read(b);
    merge(a.begin(), a.end(), b.begin(), b.end(), back_inserter(c));
    for (int i = 0; i < (int)c.size(); i++){
        if (i) printf(" ");
        printf("%d", c[i]);
    }
    return 0;
}