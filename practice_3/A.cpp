/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-05-29 10:35:04 
 * @Last Modified by: 08250117_Sawakage
 * @Last Modified time: 2026-05-29 12:36:02
 */
#include <cstdio>
#include <cstring>
using namespace std;

struct Node{
    char val;
    Node *left, *right;
};
char s[110];
int pos;

Node* build(){
    if(s[pos] == '\0' || s[pos] == ' '){
        pos++;
        return nullptr;
    }
    Node* p = new Node;
    p->val = s[pos++];
    p->left  = build();
    p->right = build();
    return p;
}

void pre(Node* p){
    if(!p)
        return;
    printf("%c ", p->val);
    pre(p->left);
    pre(p->right);
}

void mid(Node* p){
    if(!p)
        return;
    mid(p->left);
    printf("%c ", p->val);
    mid(p->right);
}

int main(){
    fgets(s, sizeof(s), stdin);
    int len =(int)strlen(s);
    while(len > 0 &&(s[len-1] == '\n' || s[len-1] == '\r'))
        s[--len] = '\0';

    pos = 0;
    Node* root = build();

    pre(root);
    printf("\n");
    mid(root);
    printf("\n");
    mid(root);
    return 0;
}