/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-05-28 14:20:44 
 * @Last Modified by:   08250117_Sawakage 
 * @Last Modified time: 2026-05-28 14:20:44 
 */
#include <cstdio>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
  
int main(){
    int n, m;
    vector<int> a, b, c;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &m);
        a.push_back(m);
    }
    for (int i = 0; i < n; i++){
        scanf("%d", &m);
        b.push_back(m);
    }
    merge(a.begin(), a.end(), b.begin(), b.end(), back_inserter(c));
    for (int i = 0; i < (int)c.size(); i++){
        if (i) printf(" ");
        printf("%d", c[i]);
    }
    return 0;
}