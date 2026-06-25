/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-06-25 11:05:31 
 * @Last Modified by: 08250117_Sawakage
 * @Last Modified time: 2026-06-25 11:09:32
 */
#include <cstdio>
#include <map>
using namespace std;

struct Node{
    char name[50];
    int seat;
};

int main(){
    int n;
    scanf("%d", &n);
    map<int, Node> mp;
    for (int i = 0; i < n; i++){
        int a;
        Node node;
        scanf("%d %s %d", &a, node.name, &node.seat);
        mp[a] = node;
    }
    int q;
    scanf("%d", &q);
    if(mp.find(q) != mp.end())
        printf("%s %d", mp[q].name, mp[q].seat);
    else
        printf("NO");
    return 0;
}