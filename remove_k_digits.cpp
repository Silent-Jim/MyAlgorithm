//
// Created by lsc19 on 20/05/2019.
//
/*
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

char *removeKdigits(char *num, int k) {
    int tmp = 0,last0=-1;
    int top = 0, bot = 0;
    char reult[10005];
    char stk[10005];
    short pos[10005];
    int len = strlen(num);
    for (int i = 0; i <= len; ++i) {
        if (num[i] - '0' && i != len)tmp++;
        else {
            if (tmp) {
                if (k >= tmp) {
                    k -= tmp;
                    last0=i;
                } else {
                    for (int j = i - tmp; j < i; ++j) {
                        if (k && top > bot && num[j] < stk[top - 1]) {
                            while (k && top > bot && num[j] < stk[top - 1]) {
                                num[pos[top - 1]] = 'A';
                                top--;
                                k--;
                            }
                        }
                        stk[top] = num[j];
                        pos[top++] = j;
                    }
                    if (k) {
                        while (k && top > bot) {
                            num[pos[top - 1]] = 'A';
                            top--;
                            k--;
                        }
                    }
                }
            }
            tmp = 0;
        }
    }
    //printf("%s\n", num);
    int flag = 0, l = 0;
    for (int i = last0+1; i < len; ++i) {
        if (num[i] - 'A' && num[i] - '0') {
            flag = 1;
            reult[l++] = num[i];
        }
        if (flag && num[i] == '0')reult[l++] = num[i];
    }
    if (!flag)reult[l++] = '0';
    reult[l] = '\0';
    for (int i = 0; i < l; ++i) {
        num[i] = reult[i];
    }
    num[l] = '\0';
    // printf("%s\n",num);
    return num;
}

int main() {
    while (1) {
        char str[10005];
        int k;
        scanf("%s", str);
        scanf("%d", &k);
        printf("%s\n", removeKdigits(str, k));
    }
}
 */

