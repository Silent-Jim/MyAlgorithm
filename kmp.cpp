//
// Created by lsc19 on 2019-03-10.
//
/*
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
const int MAXN = 1024;
typedef char SString[MAXN - 1];
int nxt[MAXN];
void get_nxt(SString T) {
    int i = 1, j = 0;
    nxt[1] = 0;
    while (i < T[0]) {
        if (j == 0 || T[i] == T[j]) {
            ++i;
            ++j;
            nxt[i] = j;
        } else j = nxt[j];
    }

}

int kmp(SString S, SString T, int pos) {
    int i = pos, j = 1;
    while (i <= S[0] && j <= T[0]) {
        if (j == 0 || S[i] == T[j]) {
            ++i;
            ++j;
        } else j = nxt[j];
    }
    if (j > T[0])return i - T[0];
    else return 0;
}


int main2() {
    SString S,T;
    while (~scanf("%s", S + 1)) {
        S[0]='0';
        T[0]='0';
        memset(nxt,0, sizeof(nxt));
        S[0] = ((int)strlen(S)) - 1;
        scanf("%s", T + 1);
        printf("T len::%d\n",strlen(T));
        T[0] = ((int)strlen(T)) - 1;

        get_nxt(T);
        printf("pos::%d\n",kmp(S,T,0));


        //printf("len::%d\n",a[0]);
    }
}
 */



