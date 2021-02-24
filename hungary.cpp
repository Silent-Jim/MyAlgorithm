//
// Created by lsc19 on 07/11/2019.
//
/*
#include<cstdio>
#include<cstring>
#include<iostream>
#include<queue>
#include<vector>
#include<cmath>
#include<algorithm>
#include <stdlib.h>

using namespace std;
typedef long long ll;
const int N = 505;
int line[N][N];
int girl[N], used[N];
int k, m, n;


bool found(int x)
{
    for(int i=1; i<=n; i++)
    {
        if(line[x][i]&&!used[i])
        {
            used[i]=1;
            if(girl[i]==0||found(girl[i]))
            {
                girl[i]=x;
                return 1;
            }
        }
    }
    return 0;
}
int A[100][100];
int findMax(int r){

}
int findMin(int c){

}

int quick_pow(int m,int n);
int f(int m,int x);
int found(int x){
   for(int i=0;i<n;i++){
     if(found[i][x]&&used[x]==0){
       used[i]=1;
       if(girl[i]==0||found(girl[i]){
       girl[i]=x;
       return 1;
        }
     }
   }
   return 0;
}
int main()
{
    int a=15;
    short b=-32768;
    unsigned int c=15;
    unsigned short d=1;
    char s[40];
    char cc=-127;


   // printf("a=%x,b=%d,c=%d,d=%d\n",a,b,c,d);

    int x,y;
    while(scanf("%d",&k)&&k)
    {
        scanf("%d %d",&m,&n);
        memset(line,0,sizeof(line));
        memset(girl,0,sizeof(girl));
        for(int i=0; i<k; i++)
        {
            scanf("%d %d",&x,&y);
            line[x][y]=1;
        }
        int sum=0;
        for(int i=1; i<=m; i++)
        {
            memset(used,0,sizeof(used));
            if(found(i)) sum++;
        }
        printf("%d\n",sum);
    }

}
 */
/*
int integerBreak(int n) {
    int cnt[20] = {};
    int memo2[1000] = {};
    memo2[0] = 1;
    memo2[1] = 1;
    //从2开始到n 计算其的最大乘积
    for (int i = 2; i <= n; i++) {
        int x = -1;
        for (int j = 1; j < i; j++) {
            if (max(j * (i - j), j * memo2[i - j]) > memo2[i]) {
                x = j;
            }
            memo2[i] = max(memo2[i], max(j * (i - j), j * memo2[i - j]));

        }
        //printf("%d ",x);
        cnt[x]++;
    }
    return memo2[n];
}
typedef long long ll;
ll quick_pow(ll m, ll n) {//快速幂计算m^n
    if (n == 0)
        return 1;
    ll ans = 1;
    ll base = m;
    while (n) {
        if (n & 1)
            ans *= base;
        base *= base;
        n >>= 1;
    }
    return ans;
}

ll break_integer(ll m) {//x=m/e份最优，取整每份都为3或2,都分成3优于2的情况
    ll k = m / 3;
    switch (m % 3) {
        case 0://33333情况
            return quick_pow(3, k);
        case 1://33334情况
            return quick_pow(3, k - 1) * 4;
        case 2://333332情况
            return quick_pow(3, k) * 2;
    }
}

int CountNumber(int n) {
    if (n < 1) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }
    if (n > 2) {
        return CountNumber(n - 1) + CountNumber(n - 2);
    }

}
const double E = 2.71828;

ll f(ll m) {
    ll ans = m;
    ll x = (ll) (m / E);
    x = max((ll) 1, x);
    x -= 2;
    for (int i = 1; i <= 4; ++i) {
        x++;
        if (x < 1 || x > m) {
            continue;
        }
        ll p = m / x;
        ll q = m % x;
        ans = max(ans, quick_pow(p, x - q) * quick_pow(p + 1, q));
    }
    return ans;
}

int main() {
    while (1) {
        int x;
        scanf("%d", &x);
        printf("f:: %lld\n", f(x));
        printf("f2:: %lld\n", break_integer(x));
        printf("b:: %d\n", CountNumber(x));
    }
}
*/