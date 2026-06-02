/*
 * @Author: 08250117_Sawakage 
 * @Date: 2026-06-02 14:21:06 
 * @Last Modified by: 08250117_Sawakage
 * @Last Modified time: 2026-06-02 14:29:59
 */
#include <cstdio>
using namespace std;
int main(){
    long long a[15];
    while(scanf("%lld %lld %lld %lld %lld", &a[0], &a[1], &a[2], &a[3], &a[4]) == 5){
        if(a[0] == 0 && a[1] == 0 && a[2] == 0 && a[3] == 0 && a[4] == 0)
            break;
        if(a[1] - a[0] == a[2] - a[1] && a[2] - a[1] == a[3] - a[2]){
            long long d = a[1] - a[0];
            for(int i = 0; i < 5; i++){
                a[4] += d;
                if(i)
                    printf(" ");
                printf("%lld", a[4]);
            }
            printf("\n");
        }
        else if(a[0] != 0 && a[1] % a[0] == 0 && a[2] % a[1] == 0 && a[3] % a[2] == 0){
            long long q = a[1] / a[0];
            for(int i = 0; i < 5; i++){
                a[4] *= q;
                if(i)
                    printf(" ");
                printf("%lld", a[4]);
            }
            printf("\n");
        }
        else{
            for(int i = 0; i < 5; i++){
                a[i + 5] = a[i + 3] + a[i + 4];
            }
            printf("%lld %lld %lld %lld %lld\n", a[5], a[6], a[7], a[8], a[9]);
        }
    }
    return 0;
}