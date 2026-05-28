/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-05-28 14:20:04 
 * @Last Modified by:   08250117_Sawakage 
 * @Last Modified time: 2026-05-28 14:20:04 
 */
#include <cstdio>
#include <vector>
using namespace std;
 
const int MAXN = 32767;
 
int phi[MAXN + 10];
bool not_pri[MAXN + 10];
vector<int> primes;
 
void Phi(){
    phi[1] = 1;
    for(int i = 2; i <= MAXN; i++){
        if(!not_pri[i])
            primes.push_back(i), phi[i] = i - 1;
 
        for(int p : primes){
            int x = i * p;
            if(x > MAXN)
                break;
 
            not_pri[x] = 1;
 
            if(i % p == 0){
                phi[x] = phi[i] * p;
                break;
            }
            else
                phi[x] = phi[i] * (p - 1);
        }
    }
}
 
int main(){
    Phi();
    int cn;
    scanf("%d", &cn);
    while(cn--){
        int n;
        scanf("%d", &n);
        printf("%d\n", phi[n]);
    }
    return 0;
}