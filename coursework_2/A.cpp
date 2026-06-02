#include <cstdio>
#include <cstring>
using namespace std;
char s[5005];
int main(){
    while(scanf("%s", s) == 1){
        int n = (int)strlen(s);
        long long ans = 0;

        for(int i = 0; i < n; i++){
            int l = i, r = i;
            while(l >= 0 && r < n && s[l] == s[r])
                ans++, l--, r++;
            l = i, r = i + 1;
            while(l >= 0 && r < n && s[l] == s[r])
                ans++, l--, r++;
        }
        printf("%lld\n", ans);
    }
    return 0;
}