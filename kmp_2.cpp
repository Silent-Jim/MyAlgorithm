//
// Created by lsc19 on 2019-03-11.
//

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
char S[1024], T[1024];
int LS, LT;

void init1() {
    int i, j = 0;
    for (i = 1; i < LT; i++) {
        while (j && T[i] != T[j]) j = nxt[j];
        if (T[i] == T[j]) j++;
        nxt[i + 1] = j;
    }
}

void kmp()
{
    int i,j=0;
    for (i=0;i<LS;i++)
    {
        while (j&&S[i]!=T[j]) j=nxt[j];
        if (S[i]==T[j]) j++;
        if (j==LT)
        {
            printf("%d ",i-j+1);
            j=nxt[j];
        }
    }
}


int main7(){

    while (~scanf("%s", S)) {
        memset(nxt, 0, sizeof(nxt));
        //S[0] = ((int)strlen(S)) - 1;
        scanf("%s", T);
        // printf("T len::%d\n",strlen(T));
        // T[0] = ((int)strlen(T)) - 1;
        LS = strlen(S);
        LT = strlen(T);
        //get_nxt(T);
        //init1();
        printf("");
        //printf("pos::%d\n",kmp(S,T,0));


        //printf("len::%d\n",S[0]);
    }
}


/*

acabaabaabcacaabc
abaabc
 */





