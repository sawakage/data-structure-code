/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-05-28 14:20:18 
 * @Last Modified by:   08250117_Sawakage 
 * @Last Modified time: 2026-05-28 14:20:18 
 */
#include <cstdio>
#include <vector>
using namespace std;
 
const int MAXN = 100000;
 
bool not_pri[MAXN + 10];
vector<int> primes;
 
void Pri(){
    for(int i = 2; i <= MAXN; i++){
        if(!not_pri[i])
            primes.push_back(i);
        for(int p : primes){
            int x = i * p;
            if(x > MAXN)
                break;
            not_pri[x] = 1;
            if(i % p == 0)
                break;
        }
    }
}
 
long long getans(long long x){
    long long ans = x;
    for(int p : primes){
        if(1LL * p * p > x)
            break;
        if(x % p == 0){
            ans = ans / p * (p - 1);
            while(x % p == 0){
                x /= p;
            }
        }
    }
    if(x > 1)
        ans = ans / x * (x - 1);
    return ans;
}
 
int main(){
    Pri();
    long long n;
    while(scanf("%lld", &n) == 1 && n != 0){
        printf("%lld\n", getans(n));
    }
    return 0;
}